// C++ code
//
int DS_pin = 11;
int STCP_pin = 12;
int SHCP_pin = 13;

int dec_digits [10] {126, 48, 109, 121, 51, 91, 95, 112, 127, 123};

void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(A0, OUTPUT);

  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(A0, LOW);
  
  pinMode (DS_pin, OUTPUT);
  pinMode (STCP_pin, OUTPUT);
  pinMode (SHCP_pin, OUTPUT);
  
}


void loop()
{
  
  //turn on green for the first street (GO)
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(A0, LOW);
  delay(15000); // Wait for 15000 millisecond(s)
  
  //start countdown for street 1 in preparation for STOP
  for (int i=5; i>=0; i--) {
  for (int j=5; j>=0; j--) {
  for (int k=5; k>=0; k--) {
  for (int k=5; k>=0; k--) {
    digitalWrite(STCP_pin, LOW);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[0]);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[0]);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[0]);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[i]);
    digitalWrite(STCP_pin, HIGH);
    delay(10);
    }
  }
  }
  };
  
  //turn on yellow for street 2 (READY)
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(A0, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
  
  //set the displays to 0
  for (int i=9; i>=0; i--) {
    digitalWrite(STCP_pin, LOW);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[0]);
    digitalWrite(STCP_pin, HIGH);
  };
  
  //turn on green for street 2 (GO)
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(A0, LOW);
  delay(15000); // Wait for 15000 millisecond(s)
  
  //start countdown for street 2 in preparation for STOP
  for (int i=5; i>=0; i--) {
  for (int j=5; j>=0; j--) {
  for (int k=5; k>=0; k--) {
  for (int k=5; k>=0; k--) {
    digitalWrite(STCP_pin, LOW);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[0]);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[0]);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[i]);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[0]);
    digitalWrite(STCP_pin, HIGH);
    delay(10);
    }
  }
  }
  };
  
  //turn on yellow for street 3 (READY)
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(A0, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
  
  //set the displays to 0
  for (int i=9; i>=0; i--) {
    digitalWrite(STCP_pin, LOW);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[0]);
    digitalWrite(STCP_pin, HIGH);
  };
  
  //turn on green for street 3 (GO)
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(A0, LOW);
  delay(15000); // Wait for 15000 millisecond(s)
  
  //start countdown for street 3 in preparation for STOP
  for (int i=5; i>=0; i--) {
  for (int j=5; j>=0; j--) {
  for (int k=5; k>=0; k--) {
  for (int k=5; k>=0; k--) {
    digitalWrite(STCP_pin, LOW);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[0]);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[i]);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[0]);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[0]);
    digitalWrite(STCP_pin, HIGH);
    delay(10);
    }
  }
  }
  };
  
  //turn on yellow for street 4 (READY)
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(A0, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
  
  //reset the displays to 0
  for (int i=9; i>=0; i--) {
    digitalWrite(STCP_pin, LOW);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[0]);
    digitalWrite(STCP_pin, HIGH);
  };
  
  //turn on green for street 4 (GO)
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(A0, HIGH);
  delay(15000); // Wait for 15000 millisecond(s)
  
  //start countdown for street 4 in preparation for STOP
  for (int i=5; i>=0; i--) {
  for (int j=5; j>=0; j--) {
  for (int k=5; k>=0; k--) {
  for (int k=5; k>=0; k--) {
    digitalWrite(STCP_pin, LOW);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[i]);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[0]);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[0]);
    shiftOut(DS_pin, SHCP_pin, LSBFIRST, dec_digits[0]);
    digitalWrite(STCP_pin, HIGH);
    delay(10);
    }
  }
  }
  };
  
  //turn on yellow for street 1 (READY)
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(A0, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
}