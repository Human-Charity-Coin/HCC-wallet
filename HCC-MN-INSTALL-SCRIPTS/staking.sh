#/bin/bash

cd ~

sudo apt-get update
sudo apt-get -y upgrade
sudo apt-get -y dist-upgrade
sudo apt-get install -y nano htop git
sudo apt-get install -y software-properties-common
sudo apt-get install -y build-essential libtool autotools-dev pkg-config libssl-dev
sudo apt-get install -y libboost-all-dev
sudo apt-get install -y libevent-dev
sudo apt-get install -y libminiupnpc-dev
sudo apt-get install -y autoconf
sudo apt-get install -y automake unzip
sudo add-apt-repository  -y  ppa:bitcoin/bitcoin
sudo apt-get update
sudo apt-get install -y libdb4.8-dev libdb4.8++-dev
sudo apt-get install libzmq3-dev

cd /var
sudo touch swap.img
sudo chmod 600 swap.img
sudo dd if=/dev/zero of=/var/swap.img bs=1024k count=2000
sudo mkswap /var/swap.img
sudo swapon /var/swap.img
sudo free
sudo echo "/var/swap.img none swap sw 0 0" >> /etc/fstab
cd

wget https://github.com/Human-Charity-Coin/HCC-wallet/releases/download/v1.3.0/hcclin1.3.0.tar.gz
tar -xzf hcclin1.3.0.tar.gz
rm -rf hcclin1.3.0.tar.gz

sudo apt-get install -y ufw
sudo ufw allow ssh/tcp
sudo ufw limit ssh/tcp
sudo ufw logging on
echo "y" | sudo ufw enable
sudo ufw status
sudo ufw allow 6949/tcp
sudo ufw allow 9335/tcp

cd
mkdir -p .hcc
echo "staking=1" >> hcc.conf
echo "rpcuser=user"`shuf -i 100000-10000000 -n 1` >> hcc.conf
echo "rpcpassword=pass"`shuf -i 100000-10000000 -n 1` >> hcc.conf
echo "rpcallowip=127.0.0.1" >> hcc.conf
echo "listen=1" >> hcc.conf
echo "server=1" >> hcc.conf
echo "daemon=1" >> hcc.conf
echo "logtimestamps=1" >> hcc.conf
echo "maxconnections=256" >> hcc.conf
echo "addnode=155.138.218.214:6949" >> hcc.conf
echo "seednode=45.32.218.85:6949" >> hcc.conf
echo "addnode=155.138.163.73:6949" >> hcc.conf
echo "addnode=155.138.165.159:6949" >> hcc.conf
echo "addnode=45.76.179.95:6949" >> hcc.conf
echo "155.138.218.214:6949" >> hcc.conf
echo "144.202.17.44:6949" >> hcc.conf
echo "155.138.165.159:6949" >> hcc.conf
echo "45.32.218.85:6949" >> hcc.conf
echo "72.130.104.143:6949" >> hcc.conf
echo "45.76.179.95:6949" >> hcc.conf
echo "[2a02:c207:2027:7107:7f15::9]:6949" >> hcc.conf
echo "155.138.213.33:47968" >> hcc.conf
echo "[2001:19f0:5401:612:5400:2ff:fe70:1159]:6949" >> hcc.conf
echo "167.86.94.162:56360" >> hcc.conf
echo "167.86.109.168:44400" >> hcc.conf
echo "155.138.213.33:40390" >> hcc.conf
echo "155.138.213.33:6949" >> hcc.conf
echo "[2400:2653:86e1:4900:fc24:4d9e:e9a8:7579]:6949" >> hcc.conf
echo "167.86.115.141:6949" >> hcc.conf
echo "[2a02:c207:2026:219:ca5::2]:55736" >> hcc.conf
echo "[2a02:c207:2024:3977:56bd::13]:51216" >> hcc.conf
echo "144.202.99.46:37754" >> hcc.conf
echo "144.202.99.46:6949" >> hcc.conf
echo "[2a02:c207:2026:5305:3908::5]:53676" >> hcc.conf
echo "173.249.23.24:36572" >> hcc.conf
echo "173.249.23.24:6949" >> hcc.conf
echo "144.202.99.46:38320" >> hcc.conf
echo "167.86.103.119:45232" >> hcc.conf
echo "167.86.103.119:45232" >> hcc.conf
echo "167.86.103.119:6949" >> hcc.conf
echo "[2001:1c03:5a0e:700:1420:bc68:2814:fbfd]:63354" >> hcc.conf
echo "[2001:1c03:5a0e:700:1420:bc68:2814:fbfd]:6949" >> hcc.conf
echo "104.207.149.165:6949" >> hcc.conf
echo "104.207.149.165:41100" >> hcc.conf
echo "14.234.123.68:6949" >> hcc.conf
echo "144.202.101.177:6949" >> hcc.conf
echo "port=6949" >> hcc.conf
mv hcc.conf .hcc


cd
./hccd -daemon
sleep 30
./hcc-cli getinfo
sleep 5
./hcc-cli getnewaddress
echo "Use the address above to send your HCC coins to this server"
echo "If you found this helpful, please donate HCC to HR6jDFPRC4wreprriXoacaQwGYeHtv7iYZ"
