// Assignment six
// Chandrakumar

int led_pin = 7;
int switch_pin = 12;

void setup()
{
  pinMode(led_pin, OUTPUT);
  pinMode(switch_pin, INPUT_PULLUP);
}

void loop()
{
  int switch_state = digitalRead(switch_pin);
  if (switch_state == 1)
  {
    delay(1000);
    digitalWrite(led_pin, HIGH);
  }
  else
  {
    delay(2000);
    digitalWrite(led_pin, LOW);
  }
}
