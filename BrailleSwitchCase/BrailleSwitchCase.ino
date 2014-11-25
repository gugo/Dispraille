/// NOTES /// 
/*
Duty cycle = On Time / Total Cycle Time (On Time + Off Time)  (i.e 100ms On, 300ms off = 25% duty cycle 




*/
unsigned long currentMillis;
long previousMillis = 0;        // will store last time Solenoids were updated
long delaychar = 300; // resting time for solenoids, on time is this divided by 3

int Sol[] = {8,9,10,11,12,13};

void setup() {
  // initialize serial communication:
  Serial.begin(9600); 
   // initialize the LED pins:
      for (int i = 0; i < 6; i++) {
        pinMode(Sol[i], OUTPUT);
      } 
}

void loop() {
  //start millis
  unsigned long currentMillis = millis();

  if (Serial.available() > 0) {
    int inByte = Serial.read();
    // do something different depending on the character received.  
    // The switch statement expects single number values for each case;
    // in this exmaple, though, you're using single quotes to tell
    // the controller to get the ASCII value for the character.  For 
    // example 'a' = 97, 'b' = 98, and so forth:

    
    
    //Space Delay Function     
    
 /////SWITCH CASE LETTER FUNCTIOn//////   
    
    switch (inByte) {
      
      
      
  //////BEGIN LETTERS//////////////    
    case 'a':    
      digitalWrite(8, HIGH);
      chardelay();
      setLow();
      chardelay();
      break;
    
    case 'b':
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH); 
      chardelay();
      setLow(); 
      chardelay();
      break;
    
    case 'c':    
       digitalWrite(8, HIGH); 
       digitalWrite(11, HIGH); 
      chardelay();
      setLow();
      chardelay();
      break;
    
    case 'd':    
      digitalWrite(8, HIGH); 
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH); 
      chardelay();
      setLow();  
      chardelay();
      break;
    
    case 'e':    
       digitalWrite(8, HIGH); 
       digitalWrite(12, HIGH); 
      chardelay();
      setLow();
      chardelay();
      break;
      
    case 'f':    
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(11, HIGH); 
      chardelay();
      setLow(); 
      chardelay();
      break;
    
    case 'g':    
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH); 
      chardelay();
      setLow();
      chardelay();
      break;
   
   case 'h':    
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(12, HIGH); 
      chardelay();
      setLow(); 
      chardelay();
      break;
   
   case 'i':    
      digitalWrite(9, HIGH); 
      digitalWrite(11, HIGH); 
      chardelay();
      setLow();
      chardelay();
      break;
   
   case 'j':    
      digitalWrite(9, HIGH); 
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH); 
      chardelay();
      setLow();
      chardelay();
      break;
   
   case 'k':    
      digitalWrite(8, HIGH); 
      digitalWrite(10, HIGH); 
      chardelay();
      setLow();
      chardelay();
      break;
   
   case 'l':    
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH); 
      chardelay();
      setLow();
      chardelay();
      break;
      
   case 'm':    
      digitalWrite(8, HIGH); 
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH); 
      chardelay();
      setLow();
      chardelay();
      break;
   
    case 'n':    
      digitalWrite(8, HIGH); 
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH); 
      digitalWrite(12, HIGH);
      chardelay();
      setLow();
      chardelay();
      break;
   
   case 'o':    
      digitalWrite(8, HIGH); 
      digitalWrite(10, HIGH);
      digitalWrite(12, HIGH); 
      chardelay();
      setLow();
      chardelay();
      break;
   
   case 'p':    
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH); 
      digitalWrite(11, HIGH);
      chardelay();
      setLow();
      chardelay();
      break;
   
   case 'q':    
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH); 
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      chardelay();
      setLow();
      chardelay();
      break;
   
   case 'r':    
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH); 
      digitalWrite(12, HIGH);
      chardelay();
      setLow(); 
      chardelay();
      break;
   
   case 's':    
      digitalWrite(9, HIGH); 
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH); 
      chardelay();
      setLow();
      chardelay();
      break;
      
   case 't':    
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH); 
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      chardelay();
      setLow();
      chardelay();
      break;
   
    case 'u':    
      digitalWrite(8, HIGH); 
      digitalWrite(10, HIGH); 
      digitalWrite(12, HIGH);
      chardelay();
      setLow();
      chardelay();
      break;
   
   case 'v':    
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH); 
      digitalWrite(13, HIGH);
      chardelay();
      setLow();
      chardelay();
      break;
   
   case 'w':     
      digitalWrite(9, HIGH);
      digitalWrite(11, HIGH); 
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      chardelay();
      setLow();
      chardelay();
      break;
   
   case 'x':    
      digitalWrite(8, HIGH); 
      digitalWrite(10, HIGH); 
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      chardelay();
      setLow();
      chardelay();
      break;
   
   case 'y':    
      digitalWrite(8, HIGH); 
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH); 
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      chardelay();
      setLow();
      chardelay();
      break;
      
   case 'z':    
      digitalWrite(8, HIGH); 
      digitalWrite(10, HIGH); 
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      chardelay();
      setLow();
      chardelay();

      break;
   
   case ' ':    
      delay(1000);
      break;
      
      
      
 
 ////END LETTERS/////////////////  
 
    default:
      // turn all the LEDs off:
      for (int i = 0; i< 6; i++) {
        digitalWrite(Sol[i], LOW);
      }
    } 
  }
}


//wait time for solenoids to stay high///TO DO: MAke this with Millis()
void chardelay(){
  if(currentMillis - previousMillis > delaychar) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis; 
   //call set pins low function// 
  }
}

void spacedelay(){


}

void setLow(){ 
for (int i = 0; i< 6; i++) {
        digitalWrite(Sol[i], LOW);
      }
}

