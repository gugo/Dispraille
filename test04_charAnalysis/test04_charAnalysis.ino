
void setup() {
  // initialize serial communication:
  Serial.begin(9600); 
   // initialize the LED pins:
      for (int thisPin = 8; thisPin < 14; thisPin++) {
        pinMode(thisPin, OUTPUT);
      } 
}

void loop() {
  // read the sensor:
  if (Serial.available() > 0) {
    int inByte = Serial.read();
    // do something different depending on the character received.  
    // The switch statement expects single number values for each case;
    // in this exmaple, though, you're using single quotes to tell
    // the controller to get the ASCII value for the character.  For 
    // example 'a' = 97, 'b' = 98, and so forth:

    switch (inByte) {
      
      
      
  //////BEGIN LETTERS//////////////    
    case 'a':
      Serial.println("1 0");
      Serial.println("0 0");
      Serial.println("0 0");
      Serial.println("_ _");
      //digitalWrite(8, HIGH);
      //delay
      //digitalWrite(8, LOW);
      //delay
      break;
    
    case 'b':
      Serial.println("1 1");
      Serial.println("0 0");
      Serial.println("0 0");
      Serial.println("_ _");
      //digitalWrite(8, HIGH); 
      //digitalWrite(9, HIGH); 
      //delay
      //digitalWrite(8, LOW); 
      //digitalWrite(9, LOW); 
      //delay
      break;
    
    case 'c':    
       digitalWrite(8, HIGH); 
       digitalWrite(11, HIGH); 
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(11, LOW); 
      //delay
      break;
    
    case 'd':    
      digitalWrite(8, HIGH); 
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH); 
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);  
      //delay
      break;
    
    case 'e':    
       digitalWrite(8, HIGH); 
       digitalWrite(12, HIGH); 
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(12, LOW);
      break;
      
    case 'f':    
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(11, HIGH); 
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW);
      digitalWrite(11, LOW); 
      //delay
      break;
    
    case 'g':    
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH); 
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      //delay
      break;
   
   case 'h':    
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(12, HIGH); 
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW);
      digitalWrite(12, LOW); 
      //delay
      break;
   
   case 'i':    
      digitalWrite(9, HIGH); 
      digitalWrite(11, HIGH); 
      //delay
      digitalWrite(9, LOW);
      digitalWrite(11, LOW);
      //delay
      break;
   
   case 'j':    
      digitalWrite(9, HIGH); 
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH); 
      //delay
      digitalWrite(9, LOW); 
      digitalWrite(11, LOW);
      digitalWrite(12, LOW); 
      //delay
      break;
   
   case 'k':    
      digitalWrite(8, HIGH); 
      digitalWrite(10, HIGH); 
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(10, LOW);
      //delay
      break;
   
   case 'l':    
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH); 
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW);
      digitalWrite(10, LOW); 
      //delay
      break;
      
   case 'm':    
      digitalWrite(8, HIGH); 
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH); 
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(10, LOW);
      digitalWrite(11, LOW); 
      //delay
      break;
   
    case 'n':    
      digitalWrite(8, HIGH); 
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH); 
      digitalWrite(12, HIGH);
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW); 
      //delay
      break;
   
   case 'o':    
      digitalWrite(8, HIGH); 
      digitalWrite(10, HIGH);
      digitalWrite(12, HIGH); 
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(10, LOW);
      digitalWrite(12, LOW); 
      //delay
      break;
   
   case 'p':    
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH); 
      digitalWrite(11, HIGH);
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW); 
      //delay
      break;
   
   case 'q':    
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH); 
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW); 
      digitalWrite(12, LOW); 
      //delay
      break;
   
   case 'r':    
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH); 
      digitalWrite(12, HIGH);
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(12, LOW); 
      //delay
      break;
   
   case 's':    
      digitalWrite(9, HIGH); 
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH); 
      //delay
      digitalWrite(9, LOW); 
      digitalWrite(10, LOW);
      digitalWrite(11, LOW); 
      //delay
      break;
      
   case 't':    
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH); 
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //delay
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW); 
      digitalWrite(12, LOW); 
      //delay
      break;
   
    case 'u':    
      digitalWrite(8, HIGH); 
      digitalWrite(10, HIGH); 
      digitalWrite(12, HIGH);
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(10, LOW);
      digitalWrite(12, LOW); 
      //delay
      break;
   
   case 'v':    
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH); 
      digitalWrite(13, HIGH);
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(13, LOW); 
      //delay
      break;
   
   case 'w':     
      digitalWrite(9, HIGH);
      digitalWrite(11, HIGH); 
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      //delay
      digitalWrite(9, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW); 
      digitalWrite(13, LOW); 
      //delay
      break;
   
   case 'x':    
      digitalWrite(8, HIGH); 
      digitalWrite(10, HIGH); 
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(10, LOW);
      digitalWrite(12, LOW); 
      digitalWrite(13, LOW); 
      //delay
      break;
   
   case 'y':    
      digitalWrite(8, HIGH); 
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH); 
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW); 
      digitalWrite(13, LOW); 
      //delay
      break;
      
   case 'z':    
      digitalWrite(8, HIGH); 
      digitalWrite(10, HIGH); 
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      //delay
      digitalWrite(8, LOW); 
      digitalWrite(10, LOW);
      digitalWrite(12, LOW); 
      digitalWrite(13, LOW); 
      //delay
      break;
      
      case ' ':
      Serial.println("0 0");
      Serial.println("0 0");
      Serial.println("0 0");
      Serial.println("_ _");
      
      break;
 
 ////END LETTERS/////////////////  
 
    default:
      // turn all the LEDs off:
      for (int thisPin = 8; thisPin < 14; thisPin++) {
        digitalWrite(thisPin, LOW);
      }
    } 
  }
}

