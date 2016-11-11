# Arduino-MIDI-Controller

Arduino UNO MIDI Controller - Using Arduino Uno at a baud rate of 31250 to avoid reliance on MIDI.h library

# Materials:
```
1. Arduino UNO
2. Momentary Switches
3. Female MIDI Jack
4. 10k Ohm Resistors x Number of Switches
5. 330 Ohm Resistors x 2 for MIDI Jack
6. Hook-Up Wires
7. Solderless Breadboard
8. LED
```
# Schematic:

![Schematic](/Resources/schematic.png)

# Instructions:
```
1. Open MIDI-Controller.ino in Arduino IDE
2. Verify then Upload to Arduino UNO
3. Connect via MIDI to Audio Interface, Sound Module, Synthesiser, etc.
```

# Video Demonstration (Opens YouTube):

[![MIDI Controller - Arduino Uno](http://img.youtube.com/vi/mDlEyWYO4mU/0.jpg)](https://www.youtube.com/watch?v=mDlEyWYO4mU)

# To Do List:
``` 
1. Expand to 12 Note Buttons (one octave chromatic scale)
2. Add Buttons for Octave Selection (C3-C4 > C4-C5)
3. Add LED's for each Note + Octave Indicator
4. Introduce Potentiameters for Continuous Controller (CC) 
```
