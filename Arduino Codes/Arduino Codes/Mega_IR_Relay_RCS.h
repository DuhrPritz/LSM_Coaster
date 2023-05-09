int relayA = 53;
int relayB = 52;
int relayC = 51;
int relayD = 50;
int relayE = 49;
int relayF = 48;
int relayG = 47;
int relayH = 46;
int relayI = 45;
int relayJ = 44;
int relayK = 43;
int relayL = 42;
int relayM = 41;
int relayN = 40;
int relayO = 39;
int relayP = 38;
int irA = 37;
int irB = 36;
int irC = 35;
int irD = 34;
int irE = 33;
int irF = 32;
int irG = 31;
int irH = 30;
int irI = 29;
int irJ = 28;

String uish = "│ A │ B │ C │ D │ E │ F │ G │ H │ I │ X │";
const String irState = "│   │   │   │   │   │   │   │   │   │";
const String mState = "│ - │ - │ - │ - │ - │ - │ - │ - │ - │";
String command;

void setup()
{
  Serial.begin(9600); // Init Serila at 9600 Baud
  Serial.println("Serial Working"); // Test to check if serial is working or not
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
  pinMode(irA, INPUT); // IR Sensor pin INPUT
  pinMode(irB, INPUT);
  pinMode(irC, INPUT);
  pinMode(irD, INPUT);
  pinMode(irE, INPUT);
  pinMode(irF, INPUT);
  pinMode(irG, INPUT);
  pinMode(irH, INPUT);
  pinMode(irI, INPUT);
  pinMode(irJ, INPUT);
  
}

void loop()
{
  int sensorStatusA = digitalRead(irA); // Set the GPIO as Input
  int sensorStatusB = digitalRead(irB);
  int sensorStatusC = digitalRead(irC);
  int sensorStatusD = digitalRead(irD);
  int sensorStatusE = digitalRead(irE);
  int sensorStatusF = digitalRead(irF);
  int sensorStatusG = digitalRead(irG);
  int sensorStatusH = digitalRead(irH);
  int sensorStatusI = digitalRead(irI);
  int sensorStatusJ = digitalRead(irJ);
  String irState = "│   │   │   │   │   │   │   │   │   │   │";
  if (sensorStatusA == 1) // Check if the pin high or not
  {
    irState.setCharAt(2, "X");
  }
  if (sensorStatusB == 1) // Check if the pin high or not
  {
    irState.setCharAt(6, "X");
  }
  if (sensorStatusC == 1) // Check if the pin high or not
  {
    irState.setCharAt(10, "X");
  }
  if (sensorStatusD == 1) // Check if the pin high or not
  {
    irState.setCharAt(14, "X");
  }
  if (sensorStatusE == 1) // Check if the pin high or not
  {
    irState.setCharAt(18, "X");
  }
  if (sensorStatusF == 1) // Check if the pin high or not
  {
    irState.setCharAt(22, "X");
  }
  if (sensorStatusG == 1) // Check if the pin high or not
  {
    irState.setCharAt(26, "X");
  }
  if (sensorStatusH == 1) // Check if the pin high or not
  {
    irState.setCharAt(30, "X");
  }
  if (sensorStatusI == 1) // Check if the pin high or not
  {
    irState.setCharAt(34, "X");
  }
  if (sensorStatusJ == 1) // Check if the pin high or not
  {
    irState.setCharAt(38, "X");
  }
  if(Serial.available() > 0){

  while(Serial.available() > 0){
    command = Serial.readStringUntil('\n');
    Serial.println (command);
  }
    if (command.equalsIgnoreCase("a n"))
    {
      digitalWrite(relayA, HIGH);
      digitalWrite(relayB, LOW);
      mState.setCharAt(2, 'N');
    }
    else if (command.equalsIgnoreCase("b n"))
    {
      digitalWrite(relayC, HIGH);
      digitalWrite(relayD, LOW);
      mState.setCharAt(6, 'N');
    }
    else if (command.equalsIgnoreCase("c n"))
    {
      digitalWrite(relayE, HIGH);
      digitalWrite(relayF, LOW);
      mState.setCharAt(10, 'N');
    }
    else if (command.equalsIgnoreCase("d n"))
    {
      digitalWrite(relayG, HIGH);
      digitalWrite(relayH, LOW);
      mState.setCharAt(14, 'N');
    }
    else if (command.equalsIgnoreCase("e n"))
    {
      digitalWrite(relayI, HIGH);
      digitalWrite(relayJ, LOW);
      mState.setCharAt(18, 'N');
    }
    else if (command.equalsIgnoreCase("f n"))
    {
      digitalWrite(relayK, HIGH);
      digitalWrite(relayL, LOW);
      mState.setCharAt(22, 'N');
    }
    else if (command.equalsIgnoreCase("g n"))
    {
      digitalWrite(relayM, HIGH);
      digitalWrite(relayN, LOW);
      mState.setCharAt(26, 'N');
    }
    else if (command.equalsIgnoreCase("h n"))
    {
      digitalWrite(relayO, HIGH);
      digitalWrite(relayP, LOW);
      mState.setCharAt(30, 'N');
    }
    else if (command.equalsIgnoreCase("a s"))
    {
      digitalWrite(relayA, LOW);
      digitalWrite(relayB, HIGH);
      mState.setCharAt(2, 'S');
    }
    else if (command.equalsIgnoreCase("b s"))
    {
      digitalWrite(relayC, LOW);
      digitalWrite(relayD, HIGH);
      mState.setCharAt(6, 'S');
    }
    else if (command.equalsIgnoreCase("c s"))
    {
      digitalWrite(relayE, LOW);
      digitalWrite(relayF, HIGH);
      mState.setCharAt(10, 'S');
    }
    else if (command.equalsIgnoreCase("d s"))
    {
      digitalWrite(relayG, LOW);
      digitalWrite(relayH, HIGH);
      mState.setCharAt(14, 'S');
    }
    else if (command.equalsIgnoreCase("e s"))
    {
      digitalWrite(relayI, LOW);
      digitalWrite(relayJ, HIGH);
      mState.setCharAt(18, 'S');
    }
    else if (command.equalsIgnoreCase("f s"))
    {
      digitalWrite(relayK, LOW);
      digitalWrite(relayL, HIGH);
      mState.setCharAt(22, 'S');
    }
    else if (command.equalsIgnoreCase("g s"))
    {
      digitalWrite(relayM, LOW);
      digitalWrite(relayN, HIGH);
      mState.setCharAt(26, 'S');
    }
    else if (command.equalsIgnoreCase("h s"))
    {
      digitalWrite(relayO, LOW);
      digitalWrite(relayP, HIGH);
      mState.setCharAt(30, 'S');
    }
    else if (command.equalsIgnoreCase("a o"))
    {
      digitalWrite(relayA, LOW);
      digitalWrite(relayB, LOW);
      mState.setCharAt(2, 'X');
    }
    else if (command.equalsIgnoreCase("b o"))
    {
      digitalWrite(relayC, LOW);
      digitalWrite(relayD, LOW);
      mState.setCharAt(6, 'X');
    }
    else if (command.equalsIgnoreCase("c o"))
    {
      digitalWrite(relayE, LOW);
      digitalWrite(relayF, LOW);
      mState.setCharAt(10, 'X');
    }
    else if (command.equalsIgnoreCase("d o"))
    {
      digitalWrite(relayG, LOW);
      digitalWrite(relayH, LOW);
      mState.setCharAt(14, 'X');
    }
    else if (command.equalsIgnoreCase("e o"))
    {
      digitalWrite(relayI, LOW);
      digitalWrite(relayJ, LOW);
      mState.setCharAt(18, 'X');
    }
    else if (command.equalsIgnoreCase("f o"))
    {
      digitalWrite(relayK, LOW);
      digitalWrite(relayL, LOW);
      mState.setCharAt(22, 'X');
    }
    else if (command.equalsIgnoreCase("g o"))
    {
      digitalWrite(relayM, LOW);
      digitalWrite(relayN, LOW);
      mState.setCharAt(26, 'X');
    }
    else if (command.equalsIgnoreCase("h o"))
    {
      digitalWrite(relayO, LOW);
      digitalWrite(relayP, LOW);
      mState.setCharAt(30, 'X');
    }
    else if (command.equalsIgnoreCase("off"))
    {
      digitalWrite(relayA, HIGH);
      digitalWrite(relayB, HIGH);
      mState.setCharAt(2, 'X');
      digitalWrite(relayC, HIGH);
      digitalWrite(relayD, HIGH);
      mState.setCharAt(6, 'X');
      digitalWrite(relayE, HIGH);
      digitalWrite(relayF, HIGH);
      mState.setCharAt(10, 'X');
      digitalWrite(relayG, HIGH);
      digitalWrite(relayH, HIGH);
      mState.setCharAt(14, 'X');
      digitalWrite(relayI, HIGH);
      digitalWrite(relayJ, HIGH);
      mState.setCharAt(18, 'X');
      digitalWrite(relayK, HIGH);
      digitalWrite(relayL, HIGH);
      mState.setCharAt(22, 'X');
      digitalWrite(relayM, HIGH);
      digitalWrite(relayN, HIGH);
      mState.setCharAt(26, 'X');
      digitalWrite(relayO, HIGH);
      digitalWrite(relayP, HIGH);
      mState.setCharAt(30, 'X');
    }
    else if(command.equalsIgnoreCase("trigger"))
    {
      Serial.println("trigger mode activated");
      while(digitalRead(irJ) == 1)
      {
        //digitalRead(irA);
        //digitalRead(irB);
        while (digitalRead(irC) == 1) // Check if the pin high or not
        {
          digitalWrite(relayE, HIGH);
          digitalWrite(relayF, LOW);
          mState.setCharAt(10, 'N');
        }
        while (digitalRead(irD) == 1) // Check if the pin high or not
        {
          digitalWrite(relayE, LOW);
          digitalWrite(relayF, HIGH);
          mState.setCharAt(10, 'S');
          digitalWrite(relayG, HIGH);
          digitalWrite(relayH, LOW);
          mState.setCharAt(14, 'N');
        }
        while(digitalRead(irE) == 1) // Check if the pin high or not
        {
          digitalWrite(relayG, LOW);
          digitalWrite(relayH, HIGH);
          mState.setCharAt(14, 'S');
          digitalWrite(relayI, HIGH);
          digitalWrite(relayJ, LOW);
          mState.setCharAt(18, 'N');
          digitalWrite(relayE, HIGH);
          digitalWrite(relayF, HIGH);
          mState.setCharAt(10, '-');
        }
        while (digitalRead(irF) == 1) // Check if the pin high or not
        {
          digitalWrite(relayI, LOW);
          digitalWrite(relayJ, HIGH);
          mState.setCharAt(18, 'S');
          digitalWrite(relayK, HIGH);
          digitalWrite(relayL, LOW);
          mState.setCharAt(22, 'N');
          digitalWrite(relayG, HIGH);
          digitalWrite(relayH, HIGH);
          mState.setCharAt(14, '-');
        }
        while (digitalRead(irG) == 1) // Check if the pin high or not
        {
          digitalWrite(relayK, LOW);
          digitalWrite(relayL, HIGH);
          mState.setCharAt(22, 'S');
          digitalWrite(relayM, HIGH);
          digitalWrite(relayN, LOW);
          mState.setCharAt(26, 'N');
          digitalWrite(relayI, HIGH);
          digitalWrite(relayJ, HIGH);
          mState.setCharAt(18, '-');
        }
        while(digitalRead(irH) == 1) // Check if the pin high or not
        {
          digitalWrite(relayM, LOW);
          digitalWrite(relayN, HIGH);
          mState.setCharAt(26, 'S');
          digitalWrite(relayO, HIGH);
          digitalWrite(relayP, LOW);
          mState.setCharAt(30, 'N');
          digitalWrite(relayK, HIGH);
          digitalWrite(relayL, HIGH);
          mState.setCharAt(22, '-');
        }
        while(digitalRead(irI) == 1) // Check if the pin high or not
        {
          digitalWrite(relayO, LOW);
          digitalWrite(relayP, HIGH);
          mState.setCharAt(30, 'S');
          digitalWrite(relayM, HIGH);
          digitalWrite(relayN, HIGH);
          mState.setCharAt(26, '-');
        }
      }
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
      mState = "│ - │ - │ - │ - │ - │ - │ - │ - │ - │";
      Serial.println("trigger complete");

    }
    else if(command.equalsIgnoreCase("ir"))
    {
      Serial.println(irState);
    }
    else if(command.equalsIgnoreCase("motor"))
    {
      Serial.println(uish);
      Serial.println(mState);
    }
    else {
      Serial.println("bad command");
      Serial.println("# n/s, n o/ off, ir");
    }
  }
  delay(250);
  //Serial.println(irState);

}
