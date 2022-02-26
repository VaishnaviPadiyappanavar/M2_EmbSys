# Facility Housing for Disabled
# Table of Contents
1.Project Description

2.Requirements

   2.1 High level Requirements
  
   2.2 Low Level Requirements
  
3.Block Diagram

4.Component Description

   4.1 Microcontroller
  
   4.2 Actuators
  
   4.3 Sensors
   

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

# 3.Block Diagram

![embeddedblockdiag](https://user-images.githubusercontent.com/99065925/155836092-5eb77493-d2f1-480c-a6e9-230c027b2999.PNG)

# 4.Component Description

## 4.1 Microcontroller
Microcontroller-Microcontroller used here is Atmega328.It is a 8 bit microcontroller with 28 pin and RISC Architecture.
It takes the Input from the Sensors and performs computation and drives the output.

## 4.2 Actuators
* DC Motor- Here the DC Motor is used in fan 
* Motor Driver - Since the Microcontroller cannot drive the motor a motor driver is used

## 4.3 Sensors

* Temperature Sensor- Thermistor is a type of resistor whose resistance is dependent on temperature


* Light Sensor-LDR(Light dependent resistor)is a passive component that decreases resistance with respect to receiving light
 on the component's sensitive surface.








 
  
  
