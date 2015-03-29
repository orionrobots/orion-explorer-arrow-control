#!/usr/bin/env bash 
set -e

apt-get update -qq

apt-get install -y git

# Prepare platform IO root stuff
wget  https://raw.githubusercontent.com/ivankravets/platformio/master/scripts/get-platformio.py
python get-platformio.py
