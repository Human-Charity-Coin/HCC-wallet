#!/bin/bash

#Setup Variables
GREEN='\033[0;32m'
YELLOW='\033[0;93m'
RED='\033[0;31m'
NC='\033[0m'

#Checking OS
if [[ $(lsb_release -d) != *18.04* ]]; then
  echo -e ${RED}"The operating system is not Ubuntu 18.04. You must be running on ubuntu 18.04."${NC}
  exit 1
fi

echo -e ${YELLOW}"Welcome to the Human Charity Coin Automated Install, During this Process Please Hit Enter or Input What is Asked."${NC}
echo
echo -e ${YELLOW}"You Will See a lot of code flashing across your screen, don't be alarmed it's supposed to do that. This process can take up to an hour and may appear to be stuck, but I can promise you it's not."${NC}
echo
echo -e ${GREEN}"Are you sure you want to install a Human Charity Coin Masternode? type y/n followed by [ENTER]:"${NC}
read AGREE

if [[ $AGREE =~ "y" ]] ; then
echo -e ${GREEN}"Please Enter Your Masternodes Private Key for the first node:"${NC}
read privkey
echo -e ${GREEN}"Please Enter Your Masternodes Private Key for second node:"${NC}
read privkey2
echo -e ${GREEN}"Please Enter Your Masternodes Private Key for the third node:"${NC}
read privkey3
echo -e ${GREEN}"Please Enter Your Masternodes Private Key for 4th node:"${NC}
read privkey4
echo "Creating 4 Human Charity Coin system users with no-login access:"
sudo adduser --system --home /home/hcc hcc
sudo adduser --system --home /home/hcc2 hcc2
sudo adduser --system --home /home/hcc3 hcc3
sudo adduser --system --home /home/hcc4 hcc4
sudo apt-get -y update
sudo apt-get -y upgrade
sudo apt-get -y install software-properties-common
sudo apt-get -y install build-essential
sudo apt-get -y install libtool autotools-dev autoconf automake
sudo apt-get -y install libssl-dev
sudo apt-get -y install libevent-dev
sudo apt-get -y install libboost-all-dev
sudo apt-get -y install pkg-config
sudo add-apt-repository ppa:bitcoin/bitcoin
sudo apt-get update
sudo apt-get -y install libdb4.8-dev
sudo apt-get -y install libdb4.8++-dev
sudo apt-get -y install libminiupnpc-dev libzmq3-dev libevent-pthreads-2.0-5
sudo apt-get -y install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev
sudo apt-get -y install libqrencode-dev bsdmainutils unzip
#sudo apt install git
cd /var
sudo apt-get install -y ufw
sudo ufw allow ssh/tcp
sudo ufw limit ssh/tcp
sudo ufw logging on
echo "y" | sudo ufw enable
sudo ufw status
sudo ufw allow 6949/tcp
sudo ufw allow 9335/tcp
sudo touch swap.img
sudo chmod 600 swap.img
sudo dd if=/dev/zero of=/var/swap.img bs=1024k count=2000
sudo mkswap /var/swap.img
sudo swapon /var/swap.img
sudo echo ' /var/swap.img none swap sw 0 0 ' >> /etc/fstab
cd ~
sudo mkdir /root/hcc
cd /root/hcc
wget https://github.com/Human-Charity-Coin/HCC-wallet/releases/download/1.1.0/hcclin1.1.0.tar.gz
tar -xzvf hcclin1.1.0.tar.gz
sudo mv /root/hcc/hccd /root/hcc/hcc-cli /root/hcc/hcc-tx /usr/local/bin
sudo chmod 755 -R  /usr/local/bin/hcc*
sudo mkdir /home/hcc/.hcc
sudo touch /home/hcc/.hcc/hcc.conf
echo -e "${GREEN}Configuring Wallet for first node${NC}"
echo "rpcuser=user"`shuf -i 100000-10000000 -n 1` >> /home/hcc/.hcc/hcc.conf
echo "rpcpassword=pass"`shuf -i 100000-10000000 -n 1` >> /home/hcc/.hcc/hcc.conf
echo "rpcallowip=127.0.0.1" >> /home/hcc/.hcc/hcc.conf
echo "server=1" >> /home/hcc/.hcc/hcc.conf
echo "daemon=1" >> /home/hcc/.hcc/hcc.conf
echo "staking=1" >> /home/hcc/.hcc/hcc.conf
echo "maxconnections=250" >> /home/hcc/.hcc/hcc.conf
echo "masternode=1" >> /home/hcc/.hcc/hcc.conf
echo "rpcport=6943" >> /home/hcc/.hcc/hcc.conf
echo "listen=0" >> /home/hcc/.hcc/hcc.conf
echo "externalip=$(hostname  -I | cut -f1 -d' '):6949" >> /home/hcc/.hcc/hcc.conf
echo "masternodeprivkey=$privkey" >> /home/hcc/.hcc/hcc.conf
echo "addnode=155.138.218.214:6949" >> /home/hcc/.hcc/hcc.conf
echo "seednode=45.32.218.85:6949" >> /home/hcc/.hcc/hcc.conf
echo "addnode=155.138.163.73:6949" >> /home/hcc/.hcc/hcc.conf
echo "addnode=155.138.165.159:6949" >> /home/hcc/.hcc/hcc.conf
echo "addnode=45.76.179.95:6949" >> /home/hcc/.hcc/hcc.conf
sleep 5
echo -e "${GREEN}Configuring Wallet for second node${NC}"
sudo mkdir /home/hcc2/.hcc
sudo touch /home/hcc2/.hcc/hcc.conf
echo "rpcuser=user"`shuf -i 100000-10000000 -n 1` >> /home/hcc2/.hcc/hcc.conf
echo "rpcpassword=pass"`shuf -i 100000-10000000 -n 1` >> /home/hcc2/.hcc/hcc.conf
echo "rpcallowip=127.0.0.1" >> /home/hcc2/.hcc/hcc.conf
echo "server=1" >> /home/hcc2/.hcc/hcc.conf
echo "daemon=1" >> /home/hcc2/.hcc/hcc.conf
echo "staking=1" >> /home/hcc2/.hcc/hcc.conf
echo "maxconnections=250" >> /home/hcc2/.hcc/hcc.conf
echo "masternode=1" >> /home/hcc2/.hcc/hcc.conf
echo "rpcport=6947" >> /home/hcc2/.hcc/hcc.conf
echo "listen=0" >> /home/hcc2/.hcc/hcc.conf
echo "externalip=$(hostname  -I | cut -f1 -d' '):6949" >> /home/hcc2/.hcc/hcc.conf
echo "masternodeprivkey=$privkey2" >> /home/hcc2/.hcc/hcc.conf
echo "addnode=155.138.218.214:6949" >> /home/hcc2/.hcc/hcc.conf
echo "seednode=45.32.218.85:6949" >> /home/hcc2/.hcc/hcc.conf
echo "addnode=155.138.163.73:6949" >> /home/hcc2/.hcc/hcc.conf
echo "addnode=155.138.165.159:6949" >> /home/hcc2/.hcc/hcc.conf
echo "addnode=45.76.179.95:6949" >> /home/hcc2/.hcc/hcc.conf
sleep 5
echo -e "${GREEN}Configuring Wallet for third node${NC}"
sudo mkdir /home/hcc3/.hcc
sudo touch /home/hcc3/.hcc/hcc.conf
echo "rpcuser=user"`shuf -i 100000-10000000 -n 1` >> /home/hcc3/.hcc/hcc.conf
echo "rpcpassword=pass"`shuf -i 100000-10000000 -n 1` >> /home/hcc3/.hcc/hcc.conf
echo "rpcallowip=127.0.0.1" >> /home/hcc3/.hcc/hcc.conf
echo "server=1" >> /home/hcc3/.hcc/hcc.conf
echo "daemon=1" >> /home/hcc3/.hcc/hcc.conf
echo "staking=1" >> /home/hcc3/.hcc/hcc.conf
echo "maxconnections=250" >> /home/hcc3/.hcc/hcc.conf
echo "masternode=1" >> /home/hcc3/.hcc/hcc.conf
echo "rpcport=6940" >> /home/hcc3/.hcc/hcc.conf
echo "listen=0" >> /home/hcc3/.hcc/hcc.conf
echo "externalip=$(hostname  -I | cut -f1 -d' '):6949" >> /home/hcc3/.hcc/hcc.conf
echo "masternodeprivkey=$privkey3" >> /home/hcc3/.hcc/hcc.conf
echo "addnode=155.138.218.214:6949" >> /home/hcc3/.hcc/hcc.conf
echo "seednode=45.32.218.85:6949" >> /home/hcc3/.hcc/hcc.conf
echo "addnode=155.138.163.73:6949" >> /home/hcc3/.hcc/hcc.conf
echo "addnode=155.138.165.159:6949" >> /home/hcc3/.hcc/hcc.conf
echo "addnode=45.76.179.95:6949" >> /home/hcc3/.hcc/hcc.conf
sleep 5
echo -e "${GREEN}Configuring Wallet for 4th node${NC}"
sudo mkdir /home/hcc4/.hcc
sudo touch /home/hcc4/.hcc/hcc.conf
echo "rpcuser=user"`shuf -i 100000-10000000 -n 1` >> /home/hcc4/.hcc/hcc.conf
echo "rpcpassword=pass"`shuf -i 100000-10000000 -n 1` >> /home/hcc4/.hcc/hcc.conf
echo "rpcallowip=127.0.0.1" >> /home/hcc4/.hcc/hcc.conf
echo "server=1" >> /home/hcc4/.hcc/hcc.conf
echo "daemon=1" >> /home/hcc4/.hcc/hcc.conf
echo "staking=1" >> /home/hcc4/.hcc/hcc.conf
echo "maxconnections=250" >> /home/hcc4/.hcc/hcc.conf
echo "masternode=1" >> /home/hcc4/.hcc/hcc.conf
echo "rpcport=6946" >> /home/hcc4/.hcc/hcc.conf
echo "listen=0" >> /home/hcc4/.hcc/hcc.conf
echo "externalip=$(hostname  -I | cut -f1 -d' '):6949" >> /home/hcc4/.hcc/hcc.conf
echo "masternodeprivkey=$privkey4" >> /home/hcc4/.hcc/hcc.conf
echo "addnode=155.138.218.214:6949" >> /home/hcc4/.hcc/hcc.conf
echo "seednode=45.32.218.85:6949" >> /home/hcc4/.hcc/hcc.conf
echo "addnode=155.138.163.73:6949" >> /home/hcc4/.hcc/hcc.conf
echo "addnode=155.138.165.159:6949" >> /home/hcc4/.hcc/hcc.conf
echo "addnode=45.76.179.95:6949" >> /home/hcc4/.hcc/hcc.conf
sleep 5
fi
echo "Syncing first node, please wait...";
hccd -datadir=/home/hcc/.hcc -daemon
sleep 10
until hcc-cli -datadir=/home/hcc/.hcc mnsync status | grep -m 1 '"IsBlockchainSynced": true,'; do sleep 1 ; done > /dev/null 2>&1
echo -e ${GREEN}"First node is fully synced. You 1st masternode is running!"${NC}
sleep 10
echo "Syncing second node, please wait...";
hccd -datadir=/home/hcc2/.hcc -daemon
sleep 10
until hcc-cli -datadir=/home/hcc2/.hcc mnsync status | grep -m 1 '"IsBlockchainSynced": true,'; do sleep 1 ; done > /dev/null 2>&1
echo -e ${GREEN}"Second node is fully synced. You second masternode is running!"${NC}
sleep 10
echo "Syncing third node, please wait...";
hccd -datadir=/home/hcc3/.hcc -daemon
sleep 10
until hcc-cli -datadir=/home/hcc3/.hcc mnsync status | grep -m 1 '"IsBlockchainSynced": true,'; do sleep 1 ; done > /dev/null 2>&1
echo -e ${GREEN}"Third node is fully synced. You third masternode is running!"${NC}
sleep 10
echo "Syncing fourth node, please wait...";
hccd -datadir=/home/hcc4/.hcc -daemon
sleep 10
until hcc-cli -datadir=/home/hcc4/.hcc mnsync status | grep -m 1 '"IsBlockchainSynced": true,'; do sleep 1 ; done > /dev/null 2>&1
echo -e ${GREEN}"Last node is fully synced. You fourth masternode is running!"${NC}
echo ""
echo -e ${GREEN}"Congrats! Your HCC Masternodes are now installed and started. Please wait from 10-20 minutes in order to give the masternode enough time to sync, then start the node from your wallet, Debug console option"${NC}
echo "The END. You can close now the SSH terminal session";
