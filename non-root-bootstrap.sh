#!/usr/bin/env bash
set -e
# Arduino build

if [ "$1" == "--in-vagrant" ]; then
	cp -r /vagrant/arduino_hello_serial /home/vagrant/arduino_hello_serial
	chown -r vagrant /home/vagrant/arduino_hello_serial
fi

platformio install atmelavr
