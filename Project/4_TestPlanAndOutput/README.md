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




 
