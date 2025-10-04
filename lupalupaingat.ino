const int buzzerPin = D8;

#define NOTE_D4 294 //re
#define NOTE_E4 330 //mi
#define NOTE_F4 349 //fa
#define NOTE_G4 392 //sol
#define NOTE_C4 262 // Do
#define NOTE_A4 440 // La
#define NOTE_B4 494 // Si
#define QUARTER 235
#define EIGHTH  125
#define OWE 350
#define WIWOK 180
#define REST 0

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  tone(buzzerPin,NOTE_C4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_C4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_C4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_C4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_C4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_B4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_C4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_D4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_E4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_E4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_E4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_E4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_E4, WIWOK);
  delay(WIWOK * 1.30);
  
  tone(buzzerPin,NOTE_E4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_D4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_E4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_F4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_G4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_G4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_G4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_G4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_G4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_G4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_A4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_G4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_F4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_E4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_E4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_E4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_E4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_E4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_E4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_D4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_F4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_E4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_C4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_C4, WIWOK);
  delay(WIWOK * 1.30);
  
  tone(buzzerPin,NOTE_C4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_C4, WIWOK);
  delay(WIWOK * 1.30);

  tone(buzzerPin,NOTE_C4, WIWOK);
  delay(WIWOK * 1.30);

  delay(2000);

  tone(buzzerPin, NOTE_G4, QUARTER); //BAIT 1
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_E4, QUARTER);
  delay(QUARTER * 1.30);
  delay(1000);
  
  tone(buzzerPin, NOTE_E4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_E4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_E4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_E4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_F4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_G4, QUARTER);
  delay(QUARTER * 1.30);
  delay(500);
  
  tone(buzzerPin, NOTE_G4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_G4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_G4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_G4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_F4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_E4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_F4, EIGHTH);
  delay(EIGHTH * 1.30);
  
  tone(buzzerPin, NOTE_D4, EIGHTH);
  delay(EIGHTH * 1.30);
  
 
  noTone(buzzerPin);
  delay(3000); 

   tone(buzzerPin, NOTE_F4, QUARTER); //BAIT 2
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  delay(1000);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_E4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_F4, QUARTER);
  delay(QUARTER * 1.30);
  delay(500);
  
  tone(buzzerPin, NOTE_F4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_F4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_F4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_F4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_E4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_E4, OWE);
  delay(OWE * 1.30);
  
 
  noTone(buzzerPin);
  delay(3500);
  
  tone(buzzerPin, NOTE_G4, QUARTER); //BAIT 3
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_E4, QUARTER);
  delay(QUARTER * 1.30);
  delay(1000);
  
  tone(buzzerPin, NOTE_E4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_E4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_E4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_E4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_F4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_G4, QUARTER);
  delay(QUARTER * 1.30);
  delay(1300);
  
  tone(buzzerPin, NOTE_G4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_G4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_G4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_G4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_F4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_E4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_F4, EIGHTH);
  delay(EIGHTH * 1.30);
  
  tone(buzzerPin, NOTE_D4, EIGHTH);
  delay(EIGHTH * 1.30);
  
  noTone(buzzerPin);
  delay(3700);
  
  tone(buzzerPin, NOTE_F4, QUARTER); // BAIT 4
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  delay(1000);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_E4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_F4, QUARTER);
  delay(QUARTER * 1.30);
  delay(1000);
  
  tone(buzzerPin, NOTE_F4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_F4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_F4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_F4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_E4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_E4, OWE);
  delay(OWE * 1.30);
  
  noTone(buzzerPin);
  delay(3800);
  
  tone(buzzerPin, NOTE_C4, QUARTER);
  delay(QUARTER * 1.30);
  delay(500);
  
  tone(buzzerPin, NOTE_C4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_C4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_A4, QUARTER);
  delay(QUARTER * 1.30);
  delay(500);
  
  tone(buzzerPin, NOTE_A4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_A4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  delay(200);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_G4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_G4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_A4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_B4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_C4, QUARTER);
  delay(OWE * 1.30);
  
  tone(buzzerPin, NOTE_C4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_C4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_A4, QUARTER);
  delay(QUARTER * 1.30);
  delay(500);
  
  tone(buzzerPin, NOTE_A4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_A4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  delay(200);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_G4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_G4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_A4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_B4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_C4, OWE);
  delay(OWE * 1.30);
  
  tone(buzzerPin, NOTE_C4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_C4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_A4, QUARTER);
  delay(QUARTER * 1.30);
  delay(300);
  
  tone(buzzerPin, NOTE_A4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_A4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  delay(200);
  
  tone(buzzerPin, NOTE_D4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_G4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_G4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_A4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_B4, QUARTER);
  delay(QUARTER * 1.30);
  
  tone(buzzerPin, NOTE_C4, OWE);
  delay(OWE * 1.30);
  
  noTone(buzzerPin);
  delay(1500);
  
}