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

wget https://github.com/Human-Charity-Coin/HCC-wallet/releases/download/1.0.0/hcclinux.tar.gz
tar -xzf hcclinux.tar.gz
rm -rf hcclinux.tar.gz

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
