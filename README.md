
Arduino Http
========

Using Arduino One to make a led blink with 1s of interval, we capture when the led
has logic level high and send this data to usb port. So with python we stay monitoring the same port were arduino send the data and every time the signal arrives we make a request to a server.
The server is a simple expression (js) http server running on port 5000 and it has a single route to recive the signal from python script.


## Arduino  

With an arduino and a protoboard, make a simple circuit with a led and one resistor of 300 ohms in serie and another connection with other pin to serve of data input.

So the arduino constant send '1' port with a 1s of interval to a usb via Serial 

## Python

Pyhton capture this input by monitoring the same usb port that arduino send data and after data arrive make a http request to a localhost:5000/read/ then print in terminal the data and the server response.

## JS

Js is responsible to create a Http server listen of 5000 port with a endpoint to us post data. The data spected its the state of a led