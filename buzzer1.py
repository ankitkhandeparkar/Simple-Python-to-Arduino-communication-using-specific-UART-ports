import serial
import time

if __name__ == '__main__':
    ser = serial.Serial('/dev/ttyUSB0',9600, timeout=1)
    ser.flush()
    while True:
        
        ser.write(b"ONE\n")
        time.sleep(1)
        ser.write(b"ZERO\n")
        time.sleep(1)
        
