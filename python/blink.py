#blink.py
import RPi.GPIO as GPIO			#import module
from time import sleep		# gives a delay
GPIO.setmode(GPIO.BOARD)	# choose BCM or BOARD
GPIO.setup(11,GPIO.OUT) 	#set pin 11 as output

try:
	while True:
		GPIO.output(11,1) # set pin 11 to 1/GPIO.high/True
		sleep(1.0)	  # wait
		GPIO.output(11,0) # set pin 11/gio/false
		sleep(1.0)        #wait

except KeyboardInterrupt:	# keyboard (esc)
	GPIO.cleanup() 		# set back to default settings
