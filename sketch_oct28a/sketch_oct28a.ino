#define fsr_pin1 A0
#define fsr_pin2 A1
#define fsr_pin3 A2

String ans[10] = "A B C = ";
int list[3];

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int fsr_value1 = analogRead(fsr_pin1);
  int fsr_value2 = analogRead(fsr_pin2);
  int fsr_value3 = analogRead(fsr_pin3);

  list[0] = fsr_value1;
  list[1] = fsr_value2;
  list[2] = fsr_value3;
  int br = 0;

  if(!(list[0] == 0 && list[1] == 0 && list[2] == 0)) {
    Serial.print("[A ,B ,C] = ");
    Serial.print('[');
    for(int i=0; i<3; i++) {
      Serial.print(list[i]);
      if (br != 2) {
        Serial.print(" ,");
        }
      br++;
      }
    Serial.print(']');
    Serial.println("");
    }
  delay(300);
}
