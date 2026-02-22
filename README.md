About This Project:

This is a simple Arduino project where a push button is used to count how many times it is pressed.
Every time the button is pressed, the counter increases and the updated value is displayed in the Serial Monitor.

I built this project to understand how digital input works in Arduino and how to detect button press events correctly without counting multiple times due to noise.

It’s a beginner-friendly project and a great starting point for learning Embedded Systems.

Components Used:

  Arduino Uno (or any compatible Arduino board)

  Push Button

  Jumper Wires

  Breadboard (optional)

  Arduino IDE

Circuit Connections:

  Arduino Pin 2 → Push Button (one side)

  Push Button (other side) → GND

 How It Works:

  The button pin is set as INPUT_PULLUP.

  By default, the pin reads HIGH.

  When the button is pressed, it connects to GND and becomes LOW.

  The program checks for the transition from HIGH → LOW.

  When detected, the counter increases by 1.

  The count value is printed in the Serial Monitor.

  A small delay is added to avoid multiple counts (debouncing).

How to Run: 

Connect the circuit.

Open Arduino IDE.

Paste the code.

Select your board and port.

Upload the program.

Open Serial Monitor (9600 baud rate).

Press the button and see the counter increase.

What I Learned:

How digital input works in Arduino

Using internal pull-up resistor

Detecting button press using edge detection

Basic debouncing technique

Serial communication basics

 Future Improvements:

Add LED to blink when button is pressed

Add buzzer sound

Display count on LCD

Use interrupt method instead of polling

Convert into a visitor counter project

Why This Project is Useful:

This project helps beginners understand real-world button handling in embedded systems.
It can be extended into many practical applications like score counters, tally counters, and industrial input monitoring systems.
