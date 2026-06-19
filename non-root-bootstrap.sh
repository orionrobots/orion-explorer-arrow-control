#!/usr/bin/env bash
set -e
# Arduino build

if [ "$1" == "--in-vagrant" ]; then
	sudo -u vagrant git clone /vagrant src
fi

platformio install atmelavr
