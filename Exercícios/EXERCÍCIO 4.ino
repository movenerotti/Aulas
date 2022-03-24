const int botao = 2;
const int led = 3;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

int var;

void loop()
{
  var = digitalRead(botao);
  if (var){
    digitalWrite (led, HIGH);
  }
  }