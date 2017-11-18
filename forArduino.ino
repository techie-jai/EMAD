

#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define sensorOut 8

float count=0;
float recharge=2000;
float unit=5;
float x=0;
float y=0;
int frequency = 0;

void setup() {
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);
  pinMode(3,OUTPUT);
  
  // Setting frequency-scaling to 20%
  digitalWrite(S0,HIGH);
  digitalWrite(S1,LOW);
  
  Serial.begin(9600);

}
void loop() {
  // Setting red filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  // Reading the output frequency
  frequency = pulseIn(sensorOut, LOW);
  // Printing the value on the serial monitor
   
    if(frequency<10)
    {
      count++;
      x=count/3200;
      y=x*unit;
      recharge=recharge-y;
    }
    
    Serial.print("the bill is : ");
    Serial.print(y);
    Serial.print("\n");
    Serial.print("\n");
      
    if(recharge>10)
    {
    digitalWrite(3,HIGH);
    }

delay(2000);

}
