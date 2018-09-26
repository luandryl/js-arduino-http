#!/usr/bin/env python
# -*- coding: UTF-8 -*-

import serial
import requests

ser = serial.Serial('/dev/ttyACM0', 9600)
while True:
    r = requests.post('http://localhost:5000/read/', data = { 'bpm': ser.readline() })
    print r.status_code
    print ser.readline()
    
