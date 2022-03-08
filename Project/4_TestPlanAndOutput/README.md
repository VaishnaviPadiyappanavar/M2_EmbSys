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







 
