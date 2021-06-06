#!/bin/bash

#Setup Variables
GREEN='\033[0;32m'
YELLOW='\033[0;93m'
RED='\033[0;31m'
NC='\033[0m'

echo -e ${YELLOW}"Welcome to the Human Charity Coin Automated Update 1.2.1 (4in1)."${NC}
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
wget https://github.com/Human-Charity-Coin/HCC-wallet/releases/download/v1.2.1/hcclin1.2.1.tar.gz
tar -xzf hcclin1.2.1.tar.gz
sudo chmod 755 -R  /usr/local/bin/hcc*
rm -rf hcclin1.2.1.tar.gz
echo "Deleting old nodes from node config files"
sed -i '/addnode/d' /home/hcc/.hcc/hcc.conf
sed -i '/addnode/d' /home/hcc2/.hcc/hcc.conf
sed -i '/addnode/d' /home/hcc3/.hcc/hcc.conf
sed -i '/addnode/d' /home/hcc4/.hcc/hcc.conf

echo "Adding new nodes..."
echo "addnode=155.138.218.214:6949" >> /home/hcc/.hcc/hcc.conf
echo "seednode=45.32.218.85:6949" >> /home/hcc/.hcc/hcc.conf
echo "addnode=155.138.163.73:6949" >> /home/hcc/.hcc/hcc.conf
echo "addnode=155.138.165.159:6949" >> /home/hcc/.hcc/hcc.conf
echo "addnode=45.76.179.95:6949" >> /home/hcc/.hcc/hcc.conf
echo "155.138.218.214:6949" >> /home/hcc/.hcc/hcc.conf
echo "144.202.17.44:6949" >> /home/hcc/.hcc/hcc.conf
echo "155.138.165.159:6949" >> /home/hcc/.hcc/hcc.conf
echo "45.32.218.85:6949" >> /home/hcc/.hcc/hcc.conf
echo "72.130.104.143:6949" >> /home/hcc/.hcc/hcc.conf
echo "45.76.179.95:6949" >> /home/hcc/.hcc/hcc.conf
echo "[2a02:c207:2027:7107:7f15::9]:6949" >> /home/hcc/.hcc/hcc.conf
echo "155.138.213.33:47968" >> /home/hcc/.hcc/hcc.conf
echo "[2001:19f0:5401:612:5400:2ff:fe70:1159]:6949" >> /home/hcc/.hcc/hcc.conf
echo "167.86.94.162:56360" >> /home/hcc/.hcc/hcc.conf
echo "167.86.109.168:44400" >> /home/hcc/.hcc/hcc.conf
echo "155.138.213.33:40390" >> /home/hcc/.hcc/hcc.conf
echo "155.138.213.33:6949" >> /home/hcc/.hcc/hcc.conf
echo "95.111.227.82:6949" >> /home/hcc/.hcc/hcc.conf
echo "[2400:2653:86e1:4900:fc24:4d9e:e9a8:7579]:6949" >> /home/hcc/.hcc/hcc.conf
echo "167.86.115.141:6949" >> /home/hcc/.hcc/hcc.conf
echo "[2a02:c207:2026:219:ca5::2]:55736" >> /home/hcc/.hcc/hcc.conf
echo "[2a02:c207:2024:3977:56bd::13]:51216" >> /home/hcc/.hcc/hcc.conf
echo "144.202.99.46:37754" >> /home/hcc/.hcc/hcc.conf
echo "144.202.99.46:6949" >> /home/hcc/.hcc/hcc.conf
echo "[2a02:c207:2026:5305:3908::5]:53676" >> /home/hcc/.hcc/hcc.conf
echo "173.249.23.24:36572" >> /home/hcc/.hcc/hcc.conf
echo "173.249.23.24:6949" >> /home/hcc/.hcc/hcc.conf
echo "144.202.99.46:38320" >> /home/hcc/.hcc/hcc.conf
echo "167.86.103.119:45232" >> /home/hcc/.hcc/hcc.conf
echo "167.86.103.119:45232" >> /home/hcc/.hcc/hcc.conf
echo "167.86.103.119:6949" >> /home/hcc/.hcc/hcc.conf
echo "[2001:1c03:5a0e:700:1420:bc68:2814:fbfd]:63354" >> /home/hcc/.hcc/hcc.conf
echo "[2001:1c03:5a0e:700:1420:bc68:2814:fbfd]:6949" >> /home/hcc/.hcc/hcc.conf
echo "104.207.149.165:6949" >> /home/hcc/.hcc/hcc.conf
echo "104.207.149.165:41100" >> /home/hcc/.hcc/hcc.conf
echo "14.234.123.68:6949" >> /home/hcc/.hcc/hcc.conf
echo "144.202.101.177:6949" >> /home/hcc/.hcc/hcc.conf

echo "addnode=155.138.218.214:6949" >> /home/hcc2/.hcc/hcc.conf
echo "seednode=45.32.218.85:6949" >> /home/hcc2/.hcc/hcc.conf
echo "addnode=155.138.163.73:6949" >> /home/hcc2/.hcc/hcc.conf
echo "addnode=155.138.165.159:6949" >> /home/hcc2/.hcc/hcc.conf
echo "addnode=45.76.179.95:6949" >> /home/hcc2/.hcc/hcc.conf
echo "155.138.218.214:6949" >> /home/hcc2/.hcc/hcc.conf
echo "144.202.17.44:6949" >> /home/hcc2/.hcc/hcc.conf
echo "155.138.165.159:6949" >> /home/hcc2/.hcc/hcc.conf
echo "45.32.218.85:6949" >> /home/hcc2/.hcc/hcc.conf
echo "72.130.104.143:6949" >> /home/hcc2/.hcc/hcc.conf
echo "45.76.179.95:6949" >> /home/hcc2/.hcc/hcc.conf
echo "[2a02:c207:2027:7107:7f15::9]:6949" >> /home/hcc2/.hcc/hcc.conf
echo "155.138.213.33:47968" >> /home/hcc2/.hcc/hcc.conf
echo "[2001:19f0:5401:612:5400:2ff:fe70:1159]:6949" >> /home/hcc2/.hcc/hcc.conf
echo "167.86.94.162:56360" >> /home/hcc2/.hcc/hcc.conf
echo "167.86.109.168:44400" >> /home/hcc2/.hcc/hcc.conf
echo "155.138.213.33:40390" >> /home/hcc2/.hcc/hcc.conf
echo "155.138.213.33:6949" >> /home/hcc2/.hcc/hcc.conf
echo "95.111.227.82:6949" >> /home/hcc2/.hcc/hcc.conf
echo "[2400:2653:86e1:4900:fc24:4d9e:e9a8:7579]:6949" >> /home/hcc2/.hcc/hcc.conf
echo "167.86.115.141:6949" >> /home/hcc2/.hcc/hcc.conf
echo "[2a02:c207:2026:219:ca5::2]:55736" >> /home/hcc2/.hcc/hcc.conf
echo "[2a02:c207:2024:3977:56bd::13]:51216" >> /home/hcc2/.hcc/hcc.conf
echo "144.202.99.46:37754" >> /home/hcc2/.hcc/hcc.conf
echo "144.202.99.46:6949" >> /home/hcc2/.hcc/hcc.conf
echo "[2a02:c207:2026:5305:3908::5]:53676" >> /home/hcc2/.hcc/hcc.conf
echo "173.249.23.24:36572" >> /home/hcc2/.hcc/hcc.conf
echo "173.249.23.24:6949" >> /home/hcc2/.hcc/hcc.conf
echo "144.202.99.46:38320" >> /home/hcc2/.hcc/hcc.conf
echo "167.86.103.119:45232" >> /home/hcc2/.hcc/hcc.conf
echo "167.86.103.119:45232" >> /home/hcc2/.hcc/hcc.conf
echo "167.86.103.119:6949" >> /home/hcc2/.hcc/hcc.conf
echo "[2001:1c03:5a0e:700:1420:bc68:2814:fbfd]:63354" >> /home/hcc2/.hcc/hcc.conf
echo "[2001:1c03:5a0e:700:1420:bc68:2814:fbfd]:6949" >> /home/hcc2/.hcc/hcc.conf
echo "104.207.149.165:6949" >> /home/hcc2/.hcc/hcc.conf
echo "104.207.149.165:41100" >> /home/hcc2/.hcc/hcc.conf
echo "14.234.123.68:6949" >> /home/hcc2/.hcc/hcc.conf
echo "144.202.101.177:6949" >> /home/hcc2/.hcc/hcc.conf

echo "addnode=155.138.218.214:6949" >> /home/hcc3/.hcc/hcc.conf
echo "seednode=45.32.218.85:6949" >> /home/hcc3/.hcc/hcc.conf
echo "addnode=155.138.163.73:6949" >> /home/hcc3/.hcc/hcc.conf
echo "addnode=155.138.165.159:6949" >> /home/hcc3/.hcc/hcc.conf
echo "addnode=45.76.179.95:6949" >> /home/hcc3/.hcc/hcc.conf
echo "155.138.218.214:6949" >> /home/hcc3/.hcc/hcc.conf
echo "144.202.17.44:6949" >> /home/hcc3/.hcc/hcc.conf
echo "155.138.165.159:6949" >> /home/hcc3/.hcc/hcc.conf
echo "45.32.218.85:6949" >> /home/hcc3/.hcc/hcc.conf
echo "72.130.104.143:6949" >> /home/hcc3/.hcc/hcc.conf
echo "45.76.179.95:6949" >> /home/hcc3/.hcc/hcc.conf
echo "[2a02:c207:2027:7107:7f15::9]:6949" >> /home/hcc3/.hcc/hcc.conf
echo "155.138.213.33:47968" >> /home/hcc3/.hcc/hcc.conf
echo "[2001:19f0:5401:612:5400:2ff:fe70:1159]:6949" >> /home/hcc3/.hcc/hcc.conf
echo "167.86.94.162:56360" >> /home/hcc3/.hcc/hcc.conf
echo "167.86.109.168:44400" >> /home/hcc3/.hcc/hcc.conf
echo "155.138.213.33:40390" >> /home/hcc3/.hcc/hcc.conf
echo "155.138.213.33:6949" >> /home/hcc3/.hcc/hcc.conf
echo "95.111.227.82:6949" >> /home/hcc3/.hcc/hcc.conf
echo "[2400:2653:86e1:4900:fc24:4d9e:e9a8:7579]:6949" >> /home/hcc3/.hcc/hcc.conf
echo "167.86.115.141:6949" >> /home/hcc3/.hcc/hcc.conf
echo "[2a02:c207:2026:219:ca5::2]:55736" >> /home/hcc3/.hcc/hcc.conf
echo "[2a02:c207:2024:3977:56bd::13]:51216" >> /home/hcc3/.hcc/hcc.conf
echo "144.202.99.46:37754" >> /home/hcc3/.hcc/hcc.conf
echo "144.202.99.46:6949" >> /home/hcc3/.hcc/hcc.conf
echo "[2a02:c207:2026:5305:3908::5]:53676" >> /home/hcc3/.hcc/hcc.conf
echo "173.249.23.24:36572" >> /home/hcc3/.hcc/hcc.conf
echo "173.249.23.24:6949" >> /home/hcc3/.hcc/hcc.conf
echo "144.202.99.46:38320" >> /home/hcc3/.hcc/hcc.conf
echo "167.86.103.119:45232" >> /home/hcc3/.hcc/hcc.conf
echo "167.86.103.119:45232" >> /home/hcc3/.hcc/hcc.conf
echo "167.86.103.119:6949" >> /home/hcc3/.hcc/hcc.conf
echo "[2001:1c03:5a0e:700:1420:bc68:2814:fbfd]:63354" >> /home/hcc3/.hcc/hcc.conf
echo "[2001:1c03:5a0e:700:1420:bc68:2814:fbfd]:6949" >> /home/hcc3/.hcc/hcc.conf
echo "104.207.149.165:6949" >> /home/hcc3/.hcc/hcc.conf
echo "104.207.149.165:41100" >> /home/hcc3/.hcc/hcc.conf
echo "14.234.123.68:6949" >> /home/hcc3/.hcc/hcc.conf
echo "144.202.101.177:6949" >> /home/hcc3/.hcc/hcc.conf

echo "addnode=155.138.218.214:6949" >> /home/hcc4/.hcc/hcc.conf
echo "seednode=45.32.218.85:6949" >> /home/hcc4/.hcc/hcc.conf
echo "addnode=155.138.163.73:6949" >> /home/hcc4/.hcc/hcc.conf
echo "addnode=155.138.165.159:6949" >> /home/hcc4/.hcc/hcc.conf
echo "addnode=45.76.179.95:6949" >> /home/hcc4/.hcc/hcc.conf
echo "155.138.218.214:6949" >> /home/hcc4/.hcc/hcc.conf
echo "144.202.17.44:6949" >> /home/hcc4/.hcc/hcc.conf
echo "155.138.165.159:6949" >> /home/hcc4/.hcc/hcc.conf
echo "45.32.218.85:6949" >> /home/hcc4/.hcc/hcc.conf
echo "72.130.104.143:6949" >> /home/hcc4/.hcc/hcc.conf
echo "45.76.179.95:6949" >> /home/hcc4/.hcc/hcc.conf
echo "[2a02:c207:2027:7107:7f15::9]:6949" >> /home/hcc4/.hcc/hcc.conf
echo "155.138.213.33:47968" >> /home/hcc4/.hcc/hcc.conf
echo "[2001:19f0:5401:612:5400:2ff:fe70:1159]:6949" >> /home/hcc4/.hcc/hcc.conf
echo "167.86.94.162:56360" >> /home/hcc4/.hcc/hcc.conf
echo "167.86.109.168:44400" >> /home/hcc4/.hcc/hcc.conf
echo "155.138.213.33:40390" >> /home/hcc4/.hcc/hcc.conf
echo "155.138.213.33:6949" >> /home/hcc4/.hcc/hcc.conf
echo "[2400:2653:86e1:4900:fc24:4d9e:e9a8:7579]:6949" >> /home/hcc4/.hcc/hcc.conf
echo "167.86.115.141:6949" >> /home/hcc4/.hcc/hcc.conf
echo "[2a02:c207:2026:219:ca5::2]:55736" >> /home/hcc4/.hcc/hcc.conf
echo "[2a02:c207:2024:3977:56bd::13]:51216" >> /home/hcc4/.hcc/hcc.conf
echo "144.202.99.46:37754" >> /home/hcc4/.hcc/hcc.conf
echo "144.202.99.46:6949" >> /home/hcc4/.hcc/hcc.conf
echo "[2a02:c207:2026:5305:3908::5]:53676" >> /home/hcc4/.hcc/hcc.conf
echo "173.249.23.24:36572" >> /home/hcc4/.hcc/hcc.conf
echo "173.249.23.24:6949" >> /home/hcc4/.hcc/hcc.conf
echo "144.202.99.46:38320" >> /home/hcc4/.hcc/hcc.conf
echo "167.86.103.119:45232" >> /home/hcc4/.hcc/hcc.conf
echo "167.86.103.119:45232" >> /home/hcc4/.hcc/hcc.conf
echo "167.86.103.119:6949" >> /home/hcc4/.hcc/hcc.conf
echo "[2001:1c03:5a0e:700:1420:bc68:2814:fbfd]:63354" >> /home/hcc4/.hcc/hcc.conf
echo "[2001:1c03:5a0e:700:1420:bc68:2814:fbfd]:6949" >> /home/hcc4/.hcc/hcc.conf
echo "104.207.149.165:6949" >> /home/hcc4/.hcc/hcc.conf
echo "104.207.149.165:41100" >> /home/hcc4/.hcc/hcc.conf
echo "14.234.123.68:6949" >> /home/hcc4/.hcc/hcc.conf
echo "144.202.101.177:6949" >> /home/hcc4/.hcc/hcc.conf

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
