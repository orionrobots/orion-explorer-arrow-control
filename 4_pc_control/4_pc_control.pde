import processing.serial.*;

Serial port;
void setup() {
    //Substitute /dev/ttyBLAH for your serial port - something similar on mac/linux, or COMn on Windows.
    port = new Serial(this, "/dev/tty.HC-06-DevB", 9600);
}

void draw() {
}

void keyPressed() {
  switch(keyCode) {
    case UP:
      port.write('w');
      break;
    case DOWN:
      port.write('s');
      break;
    case LEFT:
      port.write('a');
      break;
    case RIGHT:
      port.write('d');
      break; 
    default:
      break;
  }
}

void keyReleased() {
  port.write(' ');
}
