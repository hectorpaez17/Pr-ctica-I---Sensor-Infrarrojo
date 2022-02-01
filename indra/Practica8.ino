int infra = 9;

void setup() {
  Serial.begin(9600);   
  pinMode(infra , INPUT);  
}
 
void loop(){
  int val = 0;
  val = digitalRead(infra);  
  Serial.println(val);
  delay(1000);
}
