import serial

ser = serial.Serial()
ser.baudrate = 115200
ser.port = 'COM4'
ser.open()

values = bytearray([ord('f'), ord('o'), ord('r')])
ser.write(values)

total = 0

while total < len(values):
    print(ord(ser.read(1)))
    total = total + 1

ser.close()