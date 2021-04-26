#!/bin/bash

#Setup Variables
GREEN='\033[0;32m'
YELLOW='\033[0;93m'
RED='\033[0;31m'
NC='\033[0m'

echo -e ${YELLOW}"Welcome to the Human Charity Coin Automated Update 3.3.1 (4in1)."${NC}
echo "Please wait while updates are performed..."
sleep 5
echo "Stopping first node, please wait...";
hcc-cli -datadir=/home/hcc/.hcc stop
echo "Stopping second node, please wait...";
hcc-cli -datadir=/home/hcc2/.hcc stop
echo "Stopping third node, please wait...";
hcc-cli -datadir=/home/hcc3/.hcc stop
echo "Stopping fourth node, please wait...";
hcc-cli -datadir=/home/hcc4/.hcc stop
sleep 10
echo "Removing binaries..."
cd /usr/local/bin
rm -rf hccd hcc-cli hcc-tx
echo "Downloading latest binaries"
wget https://github.com/Human-Charity-Coin/HCC-wallet/releases/download/1.1.0/hcclin1.2.0.tar.gz
tar -xzf hcclin1.2.0.tar.gz
sudo chmod 755 -R  /usr/local/bin/hcc*
rm -rf hcclin1.2.0.tar.gz
echo "Deleting old nodes from node config files"
sed -i '/addnode/d' /home/hcc/.hcc/hcc.conf
sed -i '/addnode/d' /home/hcc2/.hcc/hcc.conf
sed -i '/addnode/d' /home/hcc3/.hcc/hcc.conf
sed -i '/addnode/d' /home/hcc4/.hcc/hcc.conf

echo "Adding new nodes..."
echo "addnode=155.138.218.214:6949" >> hcc.conf
echo "seednode=45.32.218.85:6949" >> hcc.conf
echo "addnode=155.138.163.73:6949" >> hcc.conf
echo "addnode=155.138.165.159:6949" >> hcc.conf
echo "addnode=45.76.179.95:6949" >> hcc.conf
echo "addnode=155.138.218.214:6949" >> /home/hcc2/.hcc/hcc.conf
echo "seednode=45.32.218.85:6949" >> /home/hcc2/.hcc/hcc.conf
echo "addnode=155.138.163.73:6949" >> /home/hcc2/.hcc/hcc.conf
echo "addnode=155.138.165.159:6949" >> /home/hcc2/.hcc/hcc.conf
echo "addnode=45.76.179.95:6949" >> /home/hcc2/.hcc/hcc.conf

echo "addnode=155.138.218.214:6949" >> /home/hcc3/.hcc/hcc.conf
echo "seednode=45.32.218.85:6949" >> /home/hcc3/.hcc/hcc.conf
echo "addnode=155.138.163.73:6949" >> /home/hcc3/.hcc/hcc.conf
echo "addnode=155.138.165.159:6949" >> /home/hcc3/.hcc/hcc.conf
echo "addnode=45.76.179.95:6949" >> /home/hcc3/.hcc/hcc.conf

echo "addnode=155.138.218.214:6949" >> /home/hcc4/.hcc/hcc.conf
echo "seednode=45.32.218.85:6949" >> /home/hcc4/.hcc/hcc.conf
echo "addnode=155.138.163.73:6949" >> /home/hcc4/.hcc/hcc.conf
echo "addnode=155.138.165.159:6949" >> /home/hcc4/.hcc/hcc.conf
echo "addnode=45.76.179.95:6949" >> /home/hcc4/.hcc/hcc.conf

echo "Syncing first node, please wait...";
hccd -datadir=/home/hcc/.hcc -daemon -resync
until hcc-cli -datadir=/home/hcc/.hcc mnsync status | grep -m 1 '"IsBlockchainSynced": true,'; do sleep 1 ; done > /dev/null 2>&1
echo -e ${GREEN}"First node is fully synced. Your masternode is running!"${NC}
sleep 5
echo "Syncing second node, please wait...";
hccd -datadir=/home/hcc2/.hcc -daemon -resync
until hcc-cli -datadir=/home/hcc2/.hcc mnsync status | grep -m 1 '"IsBlockchainSynced": true,'; do sleep 1 ; done > /dev/null 2>&1
echo -e ${GREEN}"Second node is fully synced. Your masternode is running!"${NC}
sleep 5
echo "Syncing third node, please wait...";
hccd -datadir=/home/hcc3/.hcc -daemon -resync
until hcc-cli -datadir=/home/hcc3/.hcc mnsync status | grep -m 1 '"IsBlockchainSynced": true,'; do sleep 1 ; done > /dev/null 2>&1
echo -e ${GREEN}"Third node is fully synced. Your masternode is running!"${NC}
sleep 5
echo "Syncing fourth node, please wait...";
hccd -datadir=/home/hcc4/.hcc -daemon -resync
until hcc-cli -datadir=/home/hcc4/.hcc mnsync status | grep -m 1 '"IsBlockchainSynced": true,'; do sleep 1 ; done > /dev/null 2>&1
echo -e ${GREEN}"Fourth node is fully synced. Your masternode is running!"${NC}
sleep 5
cd ~
echo -e ${GREEN}"If you think that this script helped in some way, feel free to donate for our work:"${NC}
echo "HCC address: HUcPsG7kXmUUkrQWhEHZadNnDjHqu6pv8U"
echo "The END. You can close now the SSH terminal session";
