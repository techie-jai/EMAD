# EMAD
IOT based Electronic Meter Automation Device is an add on for daily used electronic meters to make them smart grid ready and prepaid.Re

The cities are tranforming into smart cities now, and the biggest hurdle faced in this transformation is the availability of suitable infrastructure in which smart grid ready buildings is the one. The meters that 97% of buildings and houses have, are neither prepaid nor smart grid ready. They cant send data to the user and cant be controlled over net, in simple terms, they aren't IOT enabled.

EMAD is a device, which once mounted above the electronic meter, will send all its data to the user and represent it graphically. We can put in the value of recharge in the code and when it gets over, the meter automatically cuts off the light. It can handle two way communication with the grid, i.e. if we are producing some kind of energy, then the net energy produced and net energy consumed will be substracted and at the end of the day, the total bill is handed over. The concept of differential pricing is also introduced into it, the device can be sent time to time data about the unit rate and hence the bill amount might differ, this way the energy can be managed smartly. Lastly,the electricity can be cutoff manually right from the meter when nobody is at home, this will save alot of energy which generally gets wasted dur to the impedence of the wiring of the building.

Components Used:

1. RaspberryPi 3
2. TCS 3200
3. Arduino Uno
4. Relay board
5. Connecting wires and Cases

Things Implemented in the project:
1. Show the reading on the app and website in graphial form.
2. Enter the amount of recharge into the code and the electricity cutsoff after recharge gets over.
3. Read the value of the electricity produced(code is ready but not implemented in hardware due to shortage of funds)

Things to be done:
1. Switch off the relay manually through the website
2. Introduce differential pricing, ie change the value of unit rate while the code is running.

The code of arduino and pi are given in the repository.
