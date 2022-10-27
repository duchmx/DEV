int TRIG = 10;
int ECHO = 9;
int LED = 3;
int DURACION;
int DISTANCIA;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG, HIGH);
  delay(1);
  digitalWrite(TRIG, LOW);
  DURACION = pulseIn(ECHO, HIGH);
  DISTANCIA = DURACION / 58.2;
  Serial.println(DISTANCIA);
  if (DISTANCIA < 100 && DISTANCIA >0) {
    digitalWrite(LED, HIGH);
    delay(DISTANCIA*10);
    digitalWrite(LED, LOW);
    delay(DISTANCIA*10);
  }
}
