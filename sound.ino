int touchPin = 14;
int touchPin1 = 13;
int touchPin2 = 12;
int val = 0;
int val1 = 0;
int val2 = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = touchRead(touchPin);
   val1 = touchRead(touchPin1);
    val2 = touchRead(touchPin2);
  
    /*Serial.print("val: ");Serial.print(val);
    Serial.print("   val1: ");Serial.print(val1);
    Serial.print("   val2:");Serial.println(val2);
    delay(500);*/

  if (val < 20) {
    Serial.println("Kick");
  }

  if (val1 < 21) {
    Serial.println("Snare");
  }

  if (val2 < 22) {
    Serial.println("Hat");
  }
 delay(200);
}
