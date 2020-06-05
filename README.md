# Resistance-check

The system is designed to do a parallel resistance check.

## Components

1. Arduino-Uno
2. Resistor Board
3. Cables
4. Unknown Value Resistors
5. 1k, 10k, 100k ohm Resistors

## Design Approach

- The resitors are connected on the resistor board.
- The cables will be used to connect the resistors with the arduino.

Procedure:
1. the red cable connects the 5v in the arduino to the 10k ohm resistor.
2. the green cable connects the ground to the resistor whose value we want to find.
3. the yellow cable (analog input) is connected to the other ends of both resistors.

## Implementation

1. The connections are illustrated below.
2. Then we used a cable to connect the embedded system with the computer.
3. After we run the code on the Arduino IDE.
4. The results will be displayed
![Resistance Check](./images/ResistanceCheck.png)

## Expected Solution
Display values of the resistors.
