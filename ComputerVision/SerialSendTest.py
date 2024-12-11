<<<<<<< HEAD
import serial
ser = serial.Seria()
ser.baudrate = 8600
ser.port = 'COM3'
ser.open()

data = [1, 2, 3, 4, 5]
#need to define packet defininitinos for each packet type
values = bytearray([1, 2, 3, 4, 5])
ser.write(values)
=======
import serial
import time
ser = serial.Serial()
ser.baudrate = 115200
ser.port = 'COM4'
ser.open()

values = bytearray([4, 9, 62, 144, 56, 30, 147, 3, 210, 89, 111, 78, 184, 151, 17, 129])
ser.write(values)

total = 0

while total < len(values):
    print(ord(ser.read(1)))
    total = total + 1

ser.close()
>>>>>>> backup-main
