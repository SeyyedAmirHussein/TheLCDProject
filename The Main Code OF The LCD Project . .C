// The LCD Project .

// The Main Code OF The LCD Project . .C

// In this program, We want to Show a Text on The LCD Screen .




// Include The Library Code :


#include <LiquidCrystal.h>                                                                                                                          // Library Required for this Project .


// Initialize The Library by Associating any needed LCD Interface Pin


// With The Arduino pin Number it is Connected to


const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;                                                                                // Definition of Different Bases .
LiquidCrystal LCD (rs, en, d4, d5, d6, d7);                                                                                               // Definition of Different Bases .


void setup () {


  // Set up The LCD's Number OF Columns and Rows :


  LCD.begin (16, 2);                                                                                                             // Introducing LCD Resolution .


  // Print a Message to The LCD .


  LCD.print (" * * * * ! ! ! ! Hello , World ! ! ! ! * * * * ");                                                           // Show the Desired Message .


}

void loop() {


  // Set The Cursor to Column 0, Line 1


  // (Note: Line 1 is The Second Row, Since Counting Begins With 0) :


  LCD.setCursor (0, 1);                                                                                       // To run Regularly and Display the OUTPUT Below .
 

  // Print The Number OF Seconds Since Reset :


  LCD.print (millis () / 1000);


}
