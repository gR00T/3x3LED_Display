
/*
    4       3       2 
 ------- ------- -------
|       |       |       |
|   X   |   X   |   X   | 12  - sets the Pin to ground when digitalWrite = LOW
|       |       |       |
 ------- ------- -------
|       |       |       |
|   X   |   X   |   X   | 11  - sets the Pin to ground when digitalWrite = LOW
|       |       |       |
 ------- ------- -------
|       |       |       |
|   X   |   X   |   X   | 10  - sets the Pin to ground when digitalWrite = LOW
|       |       |       | 
 ------- ------- -------

*/

int col[] = {2,3,4};
int row[] = {10,11,12};

void setup() {
  // initializes output pins and sets the rows to HIGH to ensure everything is off:

  int x = 0;
  while(x<3){
    pinMode(row[x], OUTPUT);
    digitalWrite(row[x], HIGH);
    x++;
  }
  x = 0;
  while(x<3){
    pinMode(col[x], OUTPUT);
    digitalWrite(col[x], LOW);
    x++;
  }

}


void sqOne(int speed){

  digitalWrite(col[2], HIGH);
  digitalWrite(row[2], LOW);
  delay(speed);
  digitalWrite(col[2], LOW);
  digitalWrite(row[2], HIGH);
}

void sqTwo(int speed){

  digitalWrite(col[1], HIGH);
  digitalWrite(row[2], LOW);
  delay(speed);
  digitalWrite(col[1], LOW);
  digitalWrite(row[2], HIGH);
}

void sqThree(int speed){

  digitalWrite(col[0], HIGH);
  digitalWrite(row[2], LOW);
  delay(speed);
  digitalWrite(col[0], LOW);
  digitalWrite(row[2], HIGH);
}

void sqFour(int speed){

  digitalWrite(col[2], HIGH);
  digitalWrite(row[1], LOW);
  delay(speed);
  digitalWrite(col[2], LOW);
  digitalWrite(row[1], HIGH);
}

void sqFive(int speed){

  digitalWrite(col[1], HIGH);
  digitalWrite(row[1], LOW);
  delay(speed);
  digitalWrite(col[1], LOW);
  digitalWrite(row[1], HIGH);
}

void sqSix(int speed){

  digitalWrite(col[0], HIGH);
  digitalWrite(row[1], LOW);
  delay(speed);
  digitalWrite(col[0], LOW);
  digitalWrite(row[1], HIGH);
}

void sqSeven(int speed){

  digitalWrite(col[2], HIGH);
  digitalWrite(row[0], LOW);
  delay(speed);
  digitalWrite(col[2], LOW);
  digitalWrite(row[0], HIGH);
}

void sqEight(int speed){

  digitalWrite(col[1], HIGH);
  digitalWrite(row[0], LOW);
  delay(speed);
  digitalWrite(col[1], LOW);
  digitalWrite(row[0], HIGH);
}

void sqNine(int speed){

  digitalWrite(col[0], HIGH);
  digitalWrite(row[0], LOW);
  delay(speed);
  digitalWrite(col[0], LOW);
  digitalWrite(row[0], HIGH);
}

void Letter_L(int rounds){

  int x = 0;
  while(x<rounds){
    sqOne(1);
    sqFour(1);
    sqSeven(1);
    sqEight(1);
    sqNine(1);
    delay(5);
    x++;
  }
  
}

void Letter_U(int rounds){

  int x = 0;
  while(x<rounds){
    sqOne(1);
    sqThree(1);
    sqFour(1);
    sqSix(1);
    sqSeven(1);
    sqEight(1);
    sqNine(1);
    delay(5);
    x++;
  }
}

void Letter_C(int rounds){

  int x = 0;
  while(x<rounds){
    sqOne(1);
    sqTwo(1);
    sqThree(1);
    sqFour(1);
    sqSeven(1);
    sqEight(1);
    sqNine(1);
    delay(5);
    x++;
  }
}

void Letter_K(int rounds){

  int x = 0;
  while(x<rounds){
    sqOne(1);
    sqThree(1);
    sqFour(1);
    sqFive(1);
    sqSeven(1);
    sqNine(1);
    delay(5);
    x++;
  }
}

void Spiral(int rounds){
  // Spiral based animation

  int x = 0;
  int speed = 200;
  while(x<rounds){
    sqOne(speed);
    delay(10);
    sqTwo(speed);
    delay(10);
    sqThree(speed);
    delay(10);
    sqSix(speed);
    delay(10);
    sqNine(speed);
    delay(10);
    sqEight(speed);
    delay(10);
    sqSeven(speed);
    delay(10);
    sqFour(speed);
    delay(10);
    sqFive(speed);
    delay(10);
    sqEight(speed);
    delay(10);
    sqSeven(speed);
    delay(10);
    sqFour(speed);
    delay(10);
    x++;
  }
}

void X_Spiral(int rounds){
  // Displays an X and then a + alternating
  
  int x = 0;
  while(x<rounds){
    int j = 0;
    while(j<rounds){
      sqOne(1);
      sqThree(1);
      sqFive(1);
      sqSeven(1);
      sqNine(1);
      j++;
    }
    delay(50);
    j = 0;
    while(j<rounds){
      sqTwo(1);
      sqFour(1);
      sqFive(1);
      sqSix(1);
      sqEight(1);
      j++;
    }
    delay(50);
    x++;
    }
}

void Random_Art(int rounds){
  // Randomly generates a single LED at a time and iterates around the board

  int x = 0;
  while(x<rounds){

    int ranDelay = random(20,200);
    int ranX = random(2,5);
    int ranY = random(10,13);

    digitalWrite(ranX, HIGH);
    digitalWrite(ranY, LOW);
    delay(ranDelay);
    digitalWrite(ranX, LOW);
    digitalWrite(ranY, HIGH);
    delay(ranDelay);
    x++;
  }
  
}

void loop() {
  // Main program loop:

  Random_Art(30);
  delay(100);
  X_Spiral(20);
  delay(100);
  Letter_L(60);
  delay(100);
  Letter_U(60);
  delay(100);
  Letter_C(60);
  delay(100);
  Letter_K(60);
  delay(100);
  Spiral(5);
  delay(100);
}
