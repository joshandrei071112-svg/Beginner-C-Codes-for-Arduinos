float myfloat=3.14f; // 'f' suffix indicates a float literal
double mydouble=3.14; // double literal by default
int myx = 1; // Integer variable for comparison
int myy = myx/2; // Integer variable for comparison
float myz = (float)myx/2.0; // Casting integer to float for accurate division
float t = myfloat + mydouble; // Adding float and double, result is promoted to double
float w = myfloat * myx; // Multiplying float with an integer, result is
float s = mydouble / myy; // Dividing double by an integer, result is promoted to double

void setup() {
  Serial.begin(9600); // Start the serial communication at 9600 baud rate
}
void loop() {
        Serial.println(myfloat); // Print the float value to the serial monitor
        Serial.println(mydouble); // Print the double value to the serial monitor
        Serial.println(myx); // Print the integer value to the serial monitor
        Serial.println(myy); // Print the integer value to the serial monitor
        Serial.println(myz); // Print the float value to the serial monitor
        Serial.println(t); // Print the float value to the serial monitor
        Serial.println(w); // Print the float value to the serial monitor
        Serial.println(s); // Print the float value to the serial monitor
        delay(5000); // Wait for 5 seconds before printing again
}
// This code demonstrates the use of float and double data types in C++. It performs various operations such as addition, multiplication, and division, and prints the results to the serial monitor. The code also shows how to cast an integer to a float for accurate division.
