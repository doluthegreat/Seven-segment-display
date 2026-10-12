# Arduino Seven-Segment Display

An Arduino Uno project using a 5161AS common-cathode seven-segment display to demonstrate numeric characters (0–9) and alphabetic characters (A–J) in two separate demonstrations.

## Demonstrations

### Numeric Display (0–9)

Watch the Arduino display the digits from 0 through 9.

**[Watch the Numeric Display Demo](INSERT_NUMERIC_VIDEO_URL)**

### Alphabetic Display (A–J)

Watch the separate demonstration displaying letters A through J.

**[Watch the Alphabetic Display Demo](INSERT_ALPHABETIC_VIDEO_URL)**

## Hardware Requirements

- Arduino Uno
- 5161AS seven-segment display
- Breadboard
- Jumper wires
- Current-limiting resistors
- USB cable
- Computer with the Arduino IDE

## Pin Configuration

| Display segment | Arduino digital pin |
|---|---|
| A | D4 |
| B | D5 |
| C | D7 |
| D | D8 |
| E | D9 |
| F | D10 |
| G | D11 |

**Display type:** Common cathode.

Connect the display's common-cathode pin(s) to GND. Use a suitable current-limiting resistor for each LED segment. Verify the physical pinout of your display before wiring the circuit.

Arduino pin D6 is not used in this configuration.
**Display type:** Common cathode.

Connect the display's common-cathode pin(s) to GND. Use a suitable current-limiting resistor for each LED segment. Check the physical pinout of your specific display before connecting the circuit.

## Setup and Usage
<img width="513" height="330" alt="UNADJUSTEDNONRAW_thumb_3" src="https://github.com/user-attachments/assets/0364cb35-e559-47fe-b9b7-8b2a5d8d6b8e" />


1. Assemble the circuit using the pin configuration above.
2. Install and open the Arduino IDE.
3. Download this repository and open the `.ino` sketch.
4. Connect the Arduino Uno to your computer using USB.
5. Select **Tools → Board → Arduino Uno**.
6. Select the correct Arduino port under **Tools → Port**.
7. Click **Verify** to compile the sketch.
8. Click **Upload** to upload the program.
9. Observe the display and use the demonstration videos as a reference.

## Source Code

The Arduino sketch contains the display-control functions used to illuminate individual segments and represent characters.

## Troubleshooting

- **Nothing lights up:** Check the GND connection, wiring, and resistor placement.
- **Incorrect characters appear:** Check the segment mapping and character patterns in the code.
- **Upload fails:** Confirm the selected board, port, and USB connection.
