//void printArray ( const int [][ 3 ] ); // prototype
int relayA = 22;
int relayB = 24;
int relayC = 26;
int relayD = 28;
int relayE = 30;
int relayF = 32;
int relayG = 34;
int relayH = 36;
int relayI = 38;
int relayJ = 40;
int relayK = 42;
int relayL = 44;
int relayM = 46;
int relayN = 48;
int relayO = 50;
int relayP = 52;
int irA = 23;
int irB = 25;
int irC = 27;
int irD = 29;
int irE = 31;
int irF = 33;
int irG = 35;
int irH = 37;
int irI = 39;
int irJ = 41;
int irK = 31;
int irL = 33;
int irM = 35;
int irN = 37;
int iro = 39;
int irP = 41;

char label[33] =      {'|','A','|', 'B','|', 'C','|', 'D','|','E','|', 'F','|', 'G','|','H','|','I','|', 'J','|', 'K','|', 'L','|','M','|', 'N','|', 'O','|', 'P','|'};
char mState[33] =     {'|','-','|', '-','|', '-','|', '-','|','-','|', '-','|', '-','|','-','|','-','|', '-','|', '-','|', '-','|','-','|', '-','|', '-','|', '-','|'};
char irState[33] =    {'|','O','|', 'O','|', 'O','|', 'O','|','O','|', 'O','|', 'O','|','O','|','O','|', 'O','|', 'O','|', 'O','|','O','|', 'O','|', 'O','|', 'O','|'};

String command;

void irCheck(){
  for (int i = 1; i < 33; i+=2) { irState[i] = 'O' ;}
  if (digitalRead(irA) == 1){irState[1] = 'X';}
  if (digitalRead(irB) == 1){irState[3] = 'X';}
  if (digitalRead(irC) == 1){irState[5] = 'X';}
  if (digitalRead(irD) == 1){irState[7] = 'X';}
  if (digitalRead(irE) == 1){irState[9] = 'X';}
  if (digitalRead(irF) == 1){irState[11] = 'X';}
  if (digitalRead(irG) == 1){irState[13] = 'X';}
  if (digitalRead(irH) == 1){irState[15] = 'X';}
  if (digitalRead(irI) == 1){irState[17] = 'X';}
  if (digitalRead(irJ) == 1){irState[19] = 'X';}
}

void magNorth(){
  if (command.equalsIgnoreCase("a n"))  {
    digitalWrite(relayA, HIGH);
    digitalWrite(relayB, LOW);
    mState[1] = 'N';
  }
  else if (command.equalsIgnoreCase("b n"))  {
    digitalWrite(relayC, HIGH);
    digitalWrite(relayD, LOW);
    mState[3] = 'N';
  }
  else if (command.equalsIgnoreCase("c n"))  {
    digitalWrite(relayE, HIGH);
    digitalWrite(relayF, LOW);
    mState[5] = 'N';
  }
  else if (command.equalsIgnoreCase("d n"))  {
    digitalWrite(relayG, HIGH);
    digitalWrite(relayH, LOW);
    mState[7] = 'N';
  }
  else if (command.equalsIgnoreCase("e n"))  {
    digitalWrite(relayI, HIGH);
    digitalWrite(relayJ, LOW);
    mState[9] = 'N';
  }
  else if (command.equalsIgnoreCase("f n"))  {
    digitalWrite(relayK, HIGH);
    digitalWrite(relayL, LOW);
    mState[11] = 'N';
  }
  else if (command.equalsIgnoreCase("g n"))  {
    digitalWrite(relayM, HIGH);
    digitalWrite(relayN, LOW);
    mState[13] = 'N';
  }
  else if (command.equalsIgnoreCase("h n"))  {
    digitalWrite(relayO, HIGH);
    digitalWrite(relayP, LOW);
    mState[15] = 'N';
  }
  guish();
}
void magSouth(){
  if (command.equalsIgnoreCase("a s"))  {
    digitalWrite(relayA, LOW);
    digitalWrite(relayB, HIGH);
    mState[1] = 'S';
  }
  else if (command.equalsIgnoreCase("b s"))  {
    digitalWrite(relayC, LOW);
    digitalWrite(relayD, HIGH);
    mState[3] = 'S';
  }
  else if (command.equalsIgnoreCase("c s"))  {
    digitalWrite(relayE, LOW);
    digitalWrite(relayF, HIGH);
    mState[5] = 'S';
  }
  else if (command.equalsIgnoreCase("d s"))  {
    digitalWrite(relayG, LOW);
    digitalWrite(relayH, HIGH);
    mState[7] = 'S';
  }
  else if (command.equalsIgnoreCase("e s"))  {
    digitalWrite(relayI, LOW);
    digitalWrite(relayJ, HIGH);
    mState[9] = 'S';
  }
  else if (command.equalsIgnoreCase("f s"))  {
    digitalWrite(relayK, LOW);
    digitalWrite(relayL, HIGH);
    mState[11] = 'S';
  }
  else if (command.equalsIgnoreCase("g s"))  {
    digitalWrite(relayM, LOW);
    digitalWrite(relayN, HIGH);
    mState[13] = 'S';
  }
  else if (command.equalsIgnoreCase("h s"))  {
    digitalWrite(relayO, LOW);
    digitalWrite(relayP, HIGH);
    mState[15] = 'S';
  }
  guish();
}
void magOff(){
  if (command.equalsIgnoreCase("a o"))
  {
    digitalWrite(relayA, LOW);
    digitalWrite(relayB, LOW);
    mState[1] = '-';
  }
  else if (command.equalsIgnoreCase("b o"))
  {
    digitalWrite(relayC, LOW);
    digitalWrite(relayD, LOW);
    mState[3] = '-';
  }
  else if (command.equalsIgnoreCase("c o"))
  {
    digitalWrite(relayE, LOW);
    digitalWrite(relayF, LOW);
    mState[5] = '-';
  }
  else if (command.equalsIgnoreCase("d o"))
  {
    digitalWrite(relayG, LOW);
    digitalWrite(relayH, LOW);
    mState[7] = '-';
  }
  else if (command.equalsIgnoreCase("e o"))
  {
    digitalWrite(relayI, HIGH);
    digitalWrite(relayJ, HIGH);
    mState[9] = '-';
  }
  else if (command.equalsIgnoreCase("f o"))
  {
    digitalWrite(relayK, HIGH);
    digitalWrite(relayL, HIGH);
    mState[11] = '-';
  }
  else if (command.equalsIgnoreCase("g o"))
  {
    digitalWrite(relayM, HIGH);
    digitalWrite(relayN, HIGH);
    mState[13] = '-';
  }
  else if (command.equalsIgnoreCase("h o"))
  {
    digitalWrite(relayO, HIGH);
    digitalWrite(relayP, HIGH);
    mState[15] = '-';
  }
  else
  {
    digitalWrite(relayA, HIGH);
    digitalWrite(relayB, HIGH);
    digitalWrite(relayC, HIGH);
    digitalWrite(relayD, HIGH);
    digitalWrite(relayE, HIGH);
    digitalWrite(relayF, HIGH);
    digitalWrite(relayG, HIGH);
    digitalWrite(relayH, HIGH);
    digitalWrite(relayI, HIGH);
    digitalWrite(relayJ, HIGH);
    digitalWrite(relayK, HIGH);
    digitalWrite(relayL, HIGH);
    digitalWrite(relayM, HIGH);
    digitalWrite(relayN, HIGH);
    digitalWrite(relayO, HIGH);
    digitalWrite(relayP, HIGH);
    for (int i = 1; i < 33; i+=2) { mState[i] = '-' ;}

  }
  guish();
}

void pulse(){
  int t = 250;
  digitalWrite(relayA, HIGH);
  digitalWrite(relayB, LOW);
  mState[1] = 'N';
  delay(t);
  guish();
  digitalWrite(relayA, LOW);
  digitalWrite(relayB, HIGH);
  mState[1] = 'S';
  delay(t);
  guish();
  digitalWrite(relayC, HIGH);
  digitalWrite(relayD, LOW);
  mState[3] = 'N';
  delay(t);
  guish();
  digitalWrite(relayA, LOW);
  digitalWrite(relayB, LOW);
  mState[1] = '-';
  digitalWrite(relayC, LOW);
  digitalWrite(relayD, HIGH);
  mState[3] = 'S';
  digitalWrite(relayE, HIGH);
  digitalWrite(relayF, LOW);
  mState[5] = 'N';
  delay(t);
  guish();
  digitalWrite(relayC, LOW);
  digitalWrite(relayD, LOW);
  mState[3] = '-';
  digitalWrite(relayE, LOW);
  digitalWrite(relayF, HIGH);
  mState[5] = 'S';
  digitalWrite(relayG, HIGH);
  digitalWrite(relayH, LOW);
  mState[7] = 'N';
  delay(t);
  guish();
  digitalWrite(relayE, LOW);
  digitalWrite(relayF, LOW);
  mState[5] = '-';
  digitalWrite(relayG, LOW);
  digitalWrite(relayH, HIGH);
  mState[7] = 'S';
  digitalWrite(relayI, HIGH);
  digitalWrite(relayJ, LOW);
  mState[9] = 'N';
  delay(t);
  guish();
  digitalWrite(relayG, LOW);
  digitalWrite(relayH, LOW);
  mState[7] = '-';
  digitalWrite(relayI, LOW);
  digitalWrite(relayJ, HIGH);
  mState[9] = 'S';
  digitalWrite(relayK, HIGH);
  digitalWrite(relayL, LOW);
  mState[11] = 'N';
  delay(t);
  guish();
  digitalWrite(relayI, HIGH);
  digitalWrite(relayJ, HIGH);
  mState[9] = '-';
  digitalWrite(relayK, LOW);
  digitalWrite(relayL, HIGH);
  mState[11] = 'S';
  digitalWrite(relayM, HIGH);
  digitalWrite(relayN, LOW);
  mState[13] = 'N';
  delay(t);
  guish();
  digitalWrite(relayK, HIGH);
  digitalWrite(relayL, HIGH);
  mState[11] = '-';
  digitalWrite(relayM, LOW);
  digitalWrite(relayN, HIGH);
  mState[13] = 'S';
  digitalWrite(relayO, HIGH);
  digitalWrite(relayP, LOW);
  mState[15] = 'N';
  delay(t);
  guish();
  digitalWrite(relayM, HIGH);
  digitalWrite(relayN, HIGH);
  mState[13] = '-';
  digitalWrite(relayO, LOW);
  digitalWrite(relayP, HIGH);
  mState[15] = 'S';
  delay(t);
  guish();
  digitalWrite(relayO, HIGH);
  digitalWrite(relayP, HIGH);
  mState[15] = '-';
  guish();
}

void guish() {
  for (int i = 0; i < 33; i++) { Serial.print(label[i]);}
  Serial.println();
  for (int i = 0; i < 33; i++) { Serial.print(mState[i]);}
  Serial.println();
  for (int i = 0; i < 33; i++) { Serial.print(irState[i]);}
  Serial.println();
  Serial.print('\n');
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Serial initialized");
  pinMode(relayA, OUTPUT);
  pinMode(relayB, OUTPUT);
  pinMode(relayC, OUTPUT);
  pinMode(relayD, OUTPUT);
  pinMode(relayE, OUTPUT);
  pinMode(relayF, OUTPUT);
  pinMode(relayG, OUTPUT);
  pinMode(relayH, OUTPUT);
  pinMode(relayI, OUTPUT);
  pinMode(relayJ, OUTPUT);
  pinMode(relayK, OUTPUT);
  pinMode(relayL, OUTPUT);
  pinMode(relayM, OUTPUT);
  pinMode(relayN, OUTPUT);
  pinMode(relayO, OUTPUT);
  pinMode(relayP, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    command = Serial.readStringUntil('\n');
    Serial.println("tested: " + command);
    if (command.endsWith(" n")) {magNorth();}
    else if (command.endsWith(" s")) {magSouth();}
    else if (command.endsWith(" o")) {magOff(); }
    else if (command.equalsIgnoreCase("off")) {magOff(); }
    else if (command.equalsIgnoreCase("pulse")) {pulse(); }
    else {guish();}
  }
}

