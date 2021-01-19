#/bin/bash

cd ~
cd /usr/local/bin
./northern-cli stop
rm -rf hccd hcc-cli hcc-tx
wget https://github.com/Human-Charity-Coin/HCC-wallet/releases/download/1.0.0/hcclinux.tar.gz
tar -xzf hcclinux.tar.gz
rm -rf hcclinux.tar.gz
./hccd -daemon -resync
sleep 30
./hcc-cli getinfo
