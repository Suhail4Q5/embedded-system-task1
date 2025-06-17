  # EMBEDDED SYSTEM TASK-1
                  PUSH BUTTON COUNTER 
  
  *COMPANY*   :CODTECH IT SOLUTIONS
  
  *NAME*      : SHAIK SUHAIL
  
  *INTERN ID* : 
  
  *D0MAIN*    : EMBEDDED SYSTEMS
  
  *DURATION*  : 6 WEEEKS
  
  *MENTOR*    :NEELA SANTOSH  
  
  *DESCRIPTION ABOUT THE PUSH BUTTON COUNTER*:    This project combines two fundamental sensor inputs: a temperature sensor and a push button, using an Arduino Uno and a 16x2 LCD (or Serial Monitor) for output. It reads real-time temperature data from an LM35 temperature sensor and displays it continuously. Additionally, it uses a push button to count how many times the user has pressed it, updating the count on the display.
  
**Objective:**
Read and display temperature using a sensor.
Count and display the number of button presses.
Output data to an LCD or Serial Monitor.
**📦 Components Used:**
Arduino Uno
LM35 temperature sensor
Push button
10kΩ resistor
LCD 16x2 with I2C module (or just use Serial Monitor)
Jumper wires and breadboard
**HOW IT WORKS:**
The LM35 sensor outputs an analog voltage proportional to the temperature. The Arduino reads this voltage from analog pin A0, converts it to Celsius, and displays it.
The push button is connected to digital pin 2. Each time the button is pressed (and released), a counter increases by 1. This value is also shown on the LCD (or printed to the Serial Monitor). A short delay is added to debounce the button, preventing multiple counts from a single press.
The LCD is controlled via I2C to save wiring. It displays both temperature and button press count in real-time, refreshing every second.
**Applications:**
Ideal for learning how to interface sensors and buttons with Arduino.
Can be expanded for home automation, weather stations, or user-interaction devices.

*output*    :

  
  
