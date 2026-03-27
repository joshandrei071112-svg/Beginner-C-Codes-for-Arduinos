char myChar = 'A'; // Initializes a character variable with the value 'A'
char myChar2 = 65; // Initializes a character variable with the ASCII value of 'A'
char myChar3 = '#'; // Initializes a character variable with the value '#'
char myChar4 = 35; // Initializes a character variable with the ASCII value of '#'

void setup() {
  Serial.begin(9600); // Start the serial communication at 9600 baud rate
}

void loop() {
  Serial.println(myChar); // Print the character to the serial monitor
  Serial.println(myChar2); // Print the character represented by the ASCII value to the serial monitor
  Serial.println(myChar3); // Print the character to the serial monitor
  Serial.println(myChar4); // Print the character represented by the ASCII value to the serial monitor
  Serial.println((int)myChar); // Print the ASCII value of the character to the serial monitor
  Serial.println((int)myChar2); // Print the ASCII value of the character to the serial monitor
  Serial.println((int)myChar3); // Print the ASCII value of the character to the serial monitor
  Serial.println((int)myChar4); // Print the ASCII value of the character to the serial monitor
  delay(5000); // Wait for 5 seconds before printing again
}
