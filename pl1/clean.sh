#!/bin/bash 
echo "Cleaning....."
sudo ntfsfix /dev/sda5
sudo ntfsfix /dev/sda6
sudo ntfsfix /dev/sda7
sudo ntfsfix /dev/sda8
sudo ntfsfix /dev/sdb1
sudo ntfsfix /dev/sdb2
sudo ntfsfix /dev/sdb3
sudo ntfsfix /dev/sdb4
echo "Cleaned!"
