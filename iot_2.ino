int IR1 = 2;
 
int IR2 = 3;

int IR3 = 4;

int IR4 = 5;

int IR5 = 6;
 
int LED1 = 8;
 
int LED2 = 9;

int LED3 = 10;

int LED4 = 11;

int LED5 = 12;
 
int LDR = A3;
 
 
void setup()
 
{
 
Serial.begin(9600);
 
pinMode(LED1, OUTPUT);
 
pinMode(LED2, OUTPUT);

pinMode(LED3, OUTPUT);

pinMode(LED4, OUTPUT);

pinMode(LED5, OUTPUT);
 
pinMode(IR1, INPUT);
 
pinMode(IR2, INPUT);

pinMode(IR3, INPUT);

pinMode(IR4, INPUT);

pinMode(IR5, INPUT);
 
pinMode(LDR, INPUT);
 
}
 
void loop()
{
 
int LDRValue = analogRead(LDR);
 
Serial.print("sensor = ");
 
Serial.print(LDRValue);
 
delay (100);
 
Serial.println("It's Bright Outside; Lights status: OFF");
 
 
if (LDRValue <= 100 && digitalRead(IR1) == LOW)
 
    {
 
       digitalWrite(LED1, HIGH);
 
       Serial.println("It's Dark Outside; LED1 Lights status: ON");
 
    }
else

    {
       digitalWrite(LED1, LOW);
    }
 
if (LDRValue <= 100 && digitalRead(IR2) == LOW)
 
    {
 
       digitalWrite(LED2, HIGH);
 
       Serial.println("It's Dark Outside; LED2 Lights status: ON");
 
    }

else

    {
       digitalWrite(LED2, LOW);
    }

if (LDRValue <= 100 && digitalRead(IR3) == LOW)
 
    {
 
       digitalWrite(LED3, HIGH);
 
       Serial.println("It's Dark Outside; LED1 Lights status: ON");
 
    }

else

    {
       digitalWrite(LED3, LOW);
    }

if (LDRValue <= 100 && digitalRead(IR4) == LOW)
 
    {
 
       digitalWrite(LED4, HIGH);
 
       Serial.println("It's Dark Outside; LED1 Lights status: ON");
 
    }

else

    {
       digitalWrite(LED4, LOW);
    }

if (LDRValue <= 100 && digitalRead(IR5) == LOW)
 
    {
 
       digitalWrite(LED5, HIGH);
 
       Serial.println("It's Dark Outside; LED1 Lights status: ON");
 
    }

else

    {
       digitalWrite(LED5, LOW);
    }
 
}
