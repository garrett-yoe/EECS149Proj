import serial
ser = serial.Seria()
ser.baudrate = 8600
ser.port = 'COM3'
ser.open()

data = [1, 2, 3, 4, 5]
#need to define packet defininitinos for each packet type
values = bytearray([1, 2, 3, 4, 5])
ser.write(values)