import time

while True:
    with open("shared_data.txt" , "r") as f:
        data_received = f.read()
    print("Received data:", data_received)
    time.sleep(0.05)  # Read every 1 second