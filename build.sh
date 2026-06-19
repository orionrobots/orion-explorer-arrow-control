function make_ini() {
  cat >platformio.ini <<EOF
[platformio]
src_dir=$1
home_dir=.

[env:arduino_uno]
board = uno
framework = arduino
platform = atmelavr 
EOF
}

function build_subproject() {
  make_ini $1
  platformio run
  cp .pioenvs/arduino_uno/*.hex $1.hex
}

build_subproject 0_start
build_subproject 1_basic_serial
build_subproject 2_start_stop
build_subproject 3_arrows
# 4_pc_control is a PC based processing front end - not an arduino sketch

