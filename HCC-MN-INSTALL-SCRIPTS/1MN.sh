#!/bin/bash

POSITIONAL=()
while [[ $# -gt 0 ]]
do
key="$1"

case $key in
    -a|--advanced)
    ADVANCED="y"
    shift
    ;;
    -n|--normal)
    ADVANCED="n"
    FAIL2BAN="y"
    UFW="y"
    BOOTSTRAP="y"
    shift
    ;;
    -i|--externalip)
    EXTERNALIP="$2"
    ARGUMENTIP="y"
    shift
    shift
    ;;
    -k|--privatekey)
    KEY="$2"
    shift
    shift
    ;;
    -f|--fail2ban)
    FAIL2BAN="y"
    shift
    ;;
    --no-fail2ban)
    FAIL2BAN="n"
    shift
    ;;
    -u|--ufw)
    UFW="y"
    shift
    ;;
    --no-ufw)
    UFW="n"
    shift
    ;;
    -b|--bootstrap)
    BOOTSTRAP="y"
    shift
    ;;
    --no-bootstrap)
    BOOTSTRAP="n"
    shift
    ;;
    -h|--help)
    cat << EOL
HCC Masternode installer arguments:
    -n --normal               : Run installer in normal mode
    -a --advanced             : Run installer in advanced mode
    -i --externalip <address> : Public IP address of VPS
    -k --privatekey <key>     : Private key to use
    -f --fail2ban             : Install Fail2Ban
    --no-fail2ban             : Don't install Fail2Ban
    -u --ufw                  : Install UFW
    --no-ufw                  : Don't install UFW
    -b --bootstrap            : Sync node using Bootstrap
    --no-bootstrap            : Don't use Bootstrap
    -h --help                 : Display this help text.
EOL
    exit
    ;;
    *)    # unknown option
    POSITIONAL+=("$1") # save it in an array for later
    shift
    ;;
esac
done
set -- "${POSITIONAL[@]}" # restore positional parameters

clear

# Set these to change the version of hcc to install
TARBALLURL="https://github.com/Human-Charity-Coin/HCC-wallet/releases/download/v1.3.0/hcclin1.3.0.tar.gz"
TARBALLNAME="hcclin1.3.0.tar.gz"
BOOTSTRAPURL="https://github.com/Human-Charity-Coin/HCC-wallet/raw/master/bootstrap/bootstrap.tar.gz"
BOOTSTRAPARCHIVE="tar.gz"
BWKVERSION="1.1.0"

#!/bin/bash

# Check if we are root
if [ "$(id -u)" != "0" ]; then
   echo "This script must be run as root." 1>&2
   exit 1
fi

# Install tools for dig and systemctl
echo "Preparing installation..."
apt-get install git dnsutils systemd -y > /dev/null 2>&1

# Check for systemd
systemctl --version >/dev/null 2>&1 || { echo "systemd is required. Are you using Ubuntu 16.04?"  >&2; exit 1; }

# CHARS is used for the loading animation further down.
CHARS="/-\|"
if [ -z "$EXTERNALIP" ]; then
EXTERNALIP=`dig +short myip.opendns.com @resolver1.opendns.com`
fi
clear

if [ -z "$ADVANCED" ]; then
echo "
    ___T_
   | o o |
   |__-__|
   /| []|\\
 ()/|___|\()
    |_|_|
    /_|_\  ------- MASTERNODE INSTALLER v2 -------+
 |                                                  |
 | You can choose between two installation options: |::
 |              default and advanced.               |::
 |                                                  |::
 |  The advanced installation will install and run  |::
 |   the masternode under a non-root user. If you   |::
 |   don't know what that means, use the default    |::
 |               installation method.               |::
 |                                                  |::
 |  Otherwise, your masternode will not work, and   |::
 | the HCC Team CANNOT assist you in repairing  |::
 |         it. You will have to start over.         |::
 |                                                  |::
 +------------------------------------------------+::
   ::::::::::::::::::::::::::::::::::::::::::::::::::
"

sleep 5
fi

if [ -z "$ADVANCED" ]; then
read -e -p "Use the Advanced Installation? [N/y] : " ADVANCED
fi

if [[ ("$ADVANCED" == "y" || "$ADVANCED" == "Y") ]]; then

USER=hcc

adduser $USER --gecos "First Last,RoomNumber,WorkPhone,HomePhone" --disabled-password > /dev/null

INSTALLERUSED="#Used Advanced Install"

echo "" && echo 'Added user "hcc"' && echo ""
sleep 1

else

USER=root
FAIL2BAN="y"
UFW="y"
BOOTSTRAP="n"
INSTALLERUSED="#Used Basic Install"
fi

USERHOME=`eval echo "~$USER"`

if [ -z "$ARGUMENTIP" ]; then
read -e -p "Server IP Address: " -i $EXTERNALIP -e IP
fi

if [ -z "$KEY" ]; then
read -e -p "Masternode Private Key (e.g. 7edfjLCUzGczZi3JQw8GHp434R9kNY33eFyMGeKRymkB56G4324h # THE KEY YOU GENERATED EARLIER) : " KEY
fi

if [ -z "$FAIL2BAN" ]; then
read -e -p "Install Fail2ban? [Y/n] : " FAIL2BAN
fi

if [ -z "$UFW" ]; then
read -e -p "Install UFW and configure ports? [Y/n] : " UFW
fi

if [ -z "$BOOTSTRAP" ]; then
read -e -p "Do you want to use our bootstrap file to speed the syncing process? [Y/n] : " BOOTSTRAP
fi

clear

# Generate random passwords
RPCUSER=$(cat /dev/urandom | tr -dc 'a-zA-Z0-9' | fold -w 12 | head -n 1)
RPCPASSWORD=$(cat /dev/urandom | tr -dc 'a-zA-Z0-9' | fold -w 32 | head -n 1)

# update packages and upgrade Ubuntu
echo "Installing dependencies..."
apt-get -qq update
apt-get -qq upgrade
apt-get -qq autoremove
apt-get -qq install wget htop unzip
apt-get -qq install build-essential && apt-get -qq install libtool autotools-dev autoconf libevent-pthreads-2.0-5 automake && apt-get -qq install libssl-dev && apt-get -qq install libboost-all-dev && apt-get -qq install software-properties-common && add-apt-repository -y ppa:bitcoin/bitcoin && apt update && apt-get -qq install libdb4.8-dev && apt-get -qq install libdb4.8++-dev && apt-get -qq install libminiupnpc-dev && apt-get -qq install libqt4-dev libprotobuf-dev protobuf-compiler && apt-get -qq install libqrencode-dev && apt-get -qq install git && apt-get -qq install pkg-config && apt-get -qq install libzmq3-dev
apt-get -qq install aptitude
apt-get -qq install libevent-dev

# Install Fail2Ban
if [[ ("$FAIL2BAN" == "y" || "$FAIL2BAN" == "Y" || "$FAIL2BAN" == "") ]]; then
  aptitude -y -q install fail2ban
  service fail2ban restart
fi

# Install UFW
if [[ ("$UFW" == "y" || "$UFW" == "Y" || "$UFW" == "") ]]; then
  apt-get -qq install ufw
  ufw default deny incoming
  ufw default allow outgoing
  ufw allow ssh
  ufw allow 6949/tcp
  ufw allow 9335/tcp
  yes | ufw enable
fi

# Install HCC daemon
wget $TARBALLURL
tar -xzvf $TARBALLNAME
rm $TARBALLNAME
mv ./hccd /usr/local/bin
mv ./hcc-cli /usr/local/bin
mv ./hcc-tx /usr/local/bin
rm -rf $TARBALLNAME

# Create .hcc directory
mkdir $USERHOME/.hcc

# Install bootstrap file
if [[ ("$BOOTSTRAP" == "y" || "$BOOTSTRAP" == "Y" || "$BOOTSTRAP" == "") ]]; then
  echo "skipping"
fi

# Create hcc.conf
touch $USERHOME/.hcc/hcc.conf
cat > $USERHOME/.hcc/hcc.conf << EOL
${INSTALLERUSED}
rpcuser=${RPCUSER}
rpcpassword=${RPCPASSWORD}
rpcallowip=127.0.0.1
listen=1
server=1
daemon=1
logtimestamps=1
maxconnections=256
externalip=${IP}
bind=${IP}:6949
masternodeaddr=${IP}
masternodeprivkey=${KEY}
masternode=1
addnode=155.138.218.214:6949
seednode=45.32.218.85:6949
addnode=155.138.163.73:6949
addnode=155.138.165.159:6949
addnode=45.76.179.95:6949
EOL
chmod 0600 $USERHOME/.hcc/hcc.conf
chown -R $USER:$USER $USERHOME/.hcc

sleep 1

cat > /etc/systemd/system/hcc.service << EOL
[Unit]
Description=hccd
After=network.target
[Service]
Type=forking
User=${USER}
WorkingDirectory=${USERHOME}
ExecStart=/usr/local/bin/hccd -conf=${USERHOME}/.hcc/hcc.conf -datadir=${USERHOME}/.hcc
ExecStop=/usr/local/bin/hcc-cli -conf=${USERHOME}/.hcc/hcc.conf -datadir=${USERHOME}/.hcc stop
Restart=on-abort
[Install]
WantedBy=multi-user.target
EOL
sudo systemctl enable hcc.service
sudo systemctl start hcc.service

clear

cat << EOL
Now, you need to start your masternode. Please go to your desktop wallet
Click the Masternodes tab
Click Start all at the bottom
EOL

read -p "Press Enter to continue after you've done that. " -n1 -s

clear

echo "" && echo "Masternode setup completed." && echo ""
