
# 1.Project Description
In order make the life easy for differently-abled people Facilities such as maintaining ambient temperature and light are provided by automating tasks that they may find it difficult.Controlling of lights and fans is automated here so that differently-abled people can live comfortably.facility management team has decided to automate the tasks such as switching on lights when it gets dark and switching off lights during sleep time where the sleep time of the differently-abled people is fixed i.e 10 p.m.It is observed that there are three fans Ceiling fan,wall fan-1,wall fan-2.Fans have to be controlled depending on the temperature sensed by the temperature sensor.  

# 2. Requirements


| ID |High Level Requirements|
|----|-----------------------|
|HLR1|switch on lights when it gets dark|
|HLR2|switch off lights during their sleep time at 10 p.m|
|HLR3|sensed temperature is 23 degree and below all the fans i.e Ceiling fan,wall fan-1,wall fan-2 shall be off|
|HLR4|sensed temperature is 25 to 27 degree Ceiling fan shall be on and wall fan-1 ,wallfan-2 shall be off|
|HLR5|sensed temperature is 27 to 29 degree wall fan-1,wallfan-2 shall be on and Ceiling fan shall be off|
|HLR6|sensed temperature is 29 degree and above all the fans i.e Ceiling fan,wall fan-1,wall fan-2 shall be on|


| LLR ID |HLR ID| Low Level Requirements |
|--------|------|------------------------|
|LLR1    |HLR1  |LDR Sensor shall be used to sense light depending on the values outputed by the LDR sensor the action of switching on lights is taken care|
|LLR2    |HLR2  |Switch off lights by using timer|
|LLR3    |HLR3  |Thermistor is used to sense the temperature according to condition the motors Ceiling fan,wall fan-1,wall fan-2 shall be off|
|LLR4    |HLR3  |Thermistor is used to sense the temperature according to condition the motor Ceiling fan shall be on and wall fan-1 ,wallfan-2 shall be off|
|LLR5    |HLR3  |Thermistor is used to sense the temperature according to condition the motors wall fan-1,wallfan-2 shall be on and Ceiling fan shall be off|
|LLR6    |HLR3  |Thermistor is used to sense the temperature according to condition the motors  Ceiling fan,wall fan-1,wall fan-2 shall be on |
