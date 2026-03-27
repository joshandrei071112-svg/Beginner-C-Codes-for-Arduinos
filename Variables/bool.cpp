int LEDpin = 5; //creates a variable integer called 'LED    pin' and assigns it the value of 5
int buttonPin = 4; //creates a variable integer called 'buttonPin' and assigns it the value of 4

bool buttonState = false; //creates a variable boolean called 'buttonState' and assigns it the value of false

void setup() 
{
  Serial.begin(9600); // Start the serial communication at 9600 baud rate
  pinMode(LEDpin, OUTPUT); // Set the LED pin as an output
  pinMode(buttonPin, INPUT); // Set the button pin as an input
  digitalWrite(LEDpin, LOW); // Ensure the LED is off at the start
  digitalWrite(buttonPin, LOW); // Ensure the button state is low at the start
  digitalWrite(buttonPin, HIGH); // Enable the internal pull-up resistor for the button pin
  digitalWrite(LEDpin, buttonState); // Set the LED state to match the initial button state
}

void loop() {
  buttonState = digitalRead(buttonPin); // Read the state of the button and store it in buttonState
  Serial.println(buttonState); // Print the state of the button to the serial monitor
  digitalWrite(LEDpin, buttonState); // Set the LED state to match the button state
  delay(1000); // Wait for 1000 milliseconds before reading the button state again
  if(digitalRead(buttonPin) == HIGH) { // Check if the button is pressed (assuming active LOW)
    Serial.println("Button is pressed!"); // Print a message to the serial monitor when the button is pressed
    } else {
    Serial.println("Button is not pressed."); // Print a message to the serial monitor when the button is not pressed
    }
    delay(1000); // Wait for 1000 milliseconds before the next loop iteration
    buttonState = !buttonState; // Toggle the button state for the next loop iteration
    digitalWrite(LEDpin, buttonState); // Update the LED state to match the toggled button state
}
