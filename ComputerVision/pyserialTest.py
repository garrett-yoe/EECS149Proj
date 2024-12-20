import serial
import time
import struct

# Specify the COM port and baud rate
port = "COM4"
baud_rate = 115200  # Make sure this matches the ESP settings

# Open the serial port
try:
    ser = serial.Serial('COM4', baud_rate, timeout=3)
except serial.SerialException as e:
    print(f"No connecting: {e}")


def read_ser(timeout=5):
    start_time = time.time()
    while time.time() - start_time < timeout:
        if ser.in_waiting > 0:
            return ser.read(ser.in_waiting)
        time.sleep(0.01)
    print("Timeout: No response received within {} seconds.".format(timeout))
    return b""


def send_CMD(cmdList):
    print(f"pink: {cmdList[1]} | orange: {cmdList[3]}")
    structFormat = "50s50s"
    rob1Cmd = cmdList[1].encode()
    rob2Cmd = cmdList[3].encode()
    packed_data = struct.pack(structFormat, rob1Cmd, rob2Cmd)
    ser.write(packed_data)


valid_cmds = ["for", "lef", "rig", "sto", "avo", "ope", "clo"]

cmds = []


# Function to execute all commands in the list
def execute_commands():
    while cmds:
        command = cmds.pop(0)
        send_CMD(command)
        response = read_ser()
        print(f"Response from ESP: {response}")
        time.sleep(4)


def perform_handshake():
    ser.write("connect".encode())
    response = read_ser()
    if response == b"ready\r\n":
        print("CONNECTED")
        return True
    else:
        print(f"Got: {response}")
        return False


handshake = False
# Send code example: appending to list -> run list
last_parts = ['pink', 'follow', 'orange', 'follow']
val = 0
last_send = ['']
while True:
    if not handshake:
        print("NEED TO CONNECT")
        if perform_handshake():
            handshake = True
    else:
        with open("shared_data.txt", "r") as f:
            data_received = f.read()
            parts = data_received.split()
            if (len(parts) <4):
                parts = last_parts
            else:
                last_parts = parts
        # arr = [['p', 'ope', 'o', 'for'],  ['p', 'clo', 'o', 'for']]
        # parts = arr[val]
        # val = 1-val
        #
        if (''.join(last_send) != ''.join(parts)):
            send_CMD(parts)
            last_send = parts
            #print(parts)



# Send code example: recv/create message struct -> send struct
# try:
#     while 1:
#         cmds = [send_FOR, send_LEF, send_CLW, send_RIG, send_STO, send_CLW]
#         for i in range(len(cmds)):
#             cmds[i]()
#             string = read_ser()
#             if len(string):
#                 print(string)
#             else:
#                 print("No response received within timeout.")
#         time.sleep(0.25)  # Wait 1 second before sending the next message

# except KeyboardInterrupt:
#     print("Exiting...")
#     ser.close()  # Ensure the serial port is closed






