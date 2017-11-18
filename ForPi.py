import serial
import urllib2
import time

ser=serial.Serial('/dev/ttyACM0',9600)
myAPI="Z1K1QI7EN1HGUUN6"

baseURL='https://api.thingspeak.com/update?api_key=Z1K1QI7EN1HGUUN6'
c=1
while 1:
        data=ser.readline()
        d=str(data)
        
        c=c+3
        e=str(c)

        try:
            print e
            print d
            f=urllib2.urlopen(baseURL +  "&field1=%s&field2=%s" % (e,d))
            f.close()
            sleep(20)
        except:
            print 'exiting........'
        

    
    
