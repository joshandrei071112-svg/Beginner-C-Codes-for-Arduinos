char *myStrings[] = {"Josh", "Andrei", "F",
                     "Dela Cruz", "From", "San Miguel Hagonoy Bulacan"};

    void setup() {
      Serial.begin(9600);
    }

    void loop() {
      for (int i = 0; i < 6; i++) {
        Serial.println(myStrings[i]);
        Serial.println(myStrings[(i + 1) % 6]); // Print the next string, wrap around to the first string after the last one
        delay(5000);
      }
    }
// This code demonstrates the use of string arrays in C++. It initializes an array of strings and prints each string along with the next string in the array to the serial monitor. The code also includes a wrap-around mechanism to print the first string after reaching the last one.
