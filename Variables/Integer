int countUp = 0;            //creates a variable integer called 'countUp'
int countDown = 20;         //creates a variable integer called 'countDown'
int countBy = 2;           //creates a variable integer called 'countBy' that will be used to determine how much to count up or down by
int MaxCount = 20;          //creates a variable integer called 'MaxCount' that will be used to determine when to reset the countUp and countDown variables
int MinCount = 0;           //creates a variable integer called 'MinCount' that will be used to determine when to reset the countUp and countDown variables
int subtractBy = 2;          //creates a variable integer called 'subtractBy' that will be used to determine how much to count down by
int divider = 2;            //creates a variable integer called 'divider' that will be used to determine how much to divide the countUp and countDown variables by
int multiplyBy = 2;           //creates a variable integer called 'multiplyBy' that will be used to determine how much to multiply the countUp and countDown variables by

    void setup() {
      Serial.begin(9600);       // use the serial port to print the number
    }

    void loop() {
      countUp = countUp + countBy;                //Adds the value of countBy to the countUp int on every loop
      countUp = countUp >= 20 ? 0 : countUp; // Resets countup to 0 when it reaches 20
      Serial.println(countUp);  // prints out the current state of countUp
      countDown = countDown - subtractBy;                //Subtracts the value of subtractBy from the countDown int on every loop
      countDown = countDown <= 0 ? 20 : countDown; // Resets countDown to 20 when it reaches 0
      Serial.println(countDown);  // prints out the current state of countDown
      countDown = countDown / divider;                //Divides the value of countDown by the value of divider on every loop
      countDown = countDown <= 0 ? 20 : countDown; // Resets countDown to 20 when it reaches 0
      Serial.println(countDown);  // prints out the current state of countDown
      countUp = countUp * multiplyBy;                //Multiplies the value of countUp by the value of multiplyBy on every loop
      countUp = countUp >= 20 ? 0 : countUp; // Resets  countUp to 0 when it reaches 20
      Serial.println(countUp);  // prints out the current state of countUp
      
      delay(5000);
    }
// This code demonstrates the use of integer variables and basic arithmetic operations in C++. It counts up and down by a specified value, resets the count when it reaches certain limits, and prints the current state of the counts to the serial monitor. The code also includes division and multiplication operations on the count variables.
