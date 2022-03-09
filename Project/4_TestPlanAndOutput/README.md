# High Level Test Plan:
|Test Id|Description|Expected input|Expected output|Actual output|pass/fail|
|-------|-----------|--------------|---------------|-------------|---------|
|H1 |Detect light or dark|User input as LDR |Detectchange|Detectchange|pass|
|H2 |Detect temperature less than 23|User input as change in value of potentiometer|Detectchange|Detectchange|pass|
|H3 |Detect temperature between 25 to 27 |User input as change in value of potentiometer|Detectchange|Detectchange|pass|
|H4 |Detect temperature between 27 to 29|User input as change in value of potentiometer |Detectchange|Detectchange|pass|
|H5 |Detect temperature greater then 29|User input as change in value of potentiometer |Detectchange|Detectchange|pass|

# Low Level Test Plan:
|Test Id|Description|Expected input|Expected output|Actual output|pass/fail|
|-------|-----------|--------------|---------------|-------------|---------|
|L1 |Light intensity low (value considered less than 512)|User input|Light on|Light on|pass|
|L1 |Light intensity low (value considered more than 512)|User input|Light off|Light off|pass|

|Test Id|Description|Expected input|Expected output|Actual output|pass/fail|
|-------|-----------|--------------|---------------|-------------|---------|
|L2 |temperature less than 23(value less than 256)|User input|Ceiling fan off, wall fan1 off, wall fan2 off|Ceiling fan off, wall fan1 off, wall fan2 off|pass|

|Test Id|Description|Expected input|Expected output|Actual output|pass/fail|
|-------|-----------|--------------|---------------|-------------|---------|
|L3 |temperature is from 25 to 27(value from 256 to 512)|User input|Ceiling fan on, wall fan1 off, wall fan2 off|Ceiling fan on, wall fan1 off, wall fan2 off|pass|

|Test Id|Description|Expected input|Expected output|Actual output|pass/fail|
|-------|-----------|--------------|---------------|-------------|---------|
|L4 |temperature is from 27 to 29(value from 512 to768)|User input|Ceiling fan on, wall fan1 on, wall fan2 off|Ceiling fan on, wall fan1 on, wall fan2 off|pass|

|Test Id|Description|Expected input|Expected output|Actual output|pass/fail|
|-------|-----------|--------------|---------------|-------------|---------|
|L5|temperature more than 29(value more than 768)|User input|Ceiling fan on, wall fan1 on, wall fan2 on|Ceiling fan on, wall fan1 on, wall fan2 on|pass|
# Requirement 1
For temperature less than 23 all fans are off
![Requirement1](https://user-images.githubusercontent.com/99065925/157365133-38f21f9b-7de8-40cf-934a-3f13dc9edc8d.PNG)


# Requirement 5
For temperature greater than 29 all fan on and light on

![all on](https://user-images.githubusercontent.com/99065925/157364813-ca200622-7ce7-4e4e-a0c1-f0e88ffc4529.PNG)






 
