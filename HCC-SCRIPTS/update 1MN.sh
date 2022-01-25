#/bin/bash

cd ~
cd /usr/local/bin
./hcc-cli stop
rm -rf hccd hcc-cli hcc-tx
wget https://github.com/Human-Charity-Coin/HCC-wallet/releases/download/v1.3.0/hcclin1.3.0.tar.gz
tar -xzf hcclin1.3.0.tar.gz
rm -rf hcclin1.3.0.tar.gz
./hccd -daemon -reindex
sleep 30
./hcc-cli getinfo
