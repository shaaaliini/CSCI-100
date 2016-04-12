// Chandrakumar Shalini
// Mouse Maze
// Using LEDs and pushbuttons to tell the mouse where to go in the maze following the right wall

int turn_left = 9;
int go_straight = 12;
int turn_right = 6;
int turn_around = 10;
int wall_left = 1;
int wall_ahead = 2;
int wall_right = 0;

void setup()
{
  pinMode(turn_left, OUTPUT);
  pinMode(go_straight, OUTPUT);
  pinMode(turn_around, OUTPUT);
  pinMode(turn_right, OUTPUT);
  pinMode(wall_left, INPUT_PULLUP);
  pinMode(wall_ahead, INPUT_PULLUP);
  pinMode(wall_right, INPUT_PULLUP);

}

void loop()
{
  if (digitalRead(wall_right) == 0) //if there is no wall to the right 
  {
    digitalWrite(turn_right, HIGH); //then go right
    digitalWrite(turn_left, LOW);
    digitalWrite(go_straight, LOW);
    digitalWrite(turn_around, LOW);
  }
  else
  {
    if (digitalRead(wall_ahead) == 0) //if there is no wall straight
    {
      digitalWrite(go_straight, HIGH); //go straight
      digitalWrite(turn_right, LOW);
      digitalWrite(turn_left, LOW);
      digitalWrite(turn_around, LOW);
    }
    else
    {
      if (digitalRead(wall_left) == 0) //if there is no wall to the left
      {
        digitalWrite(turn_left, HIGH); //then go left
        digitalWrite(turn_right, LOW);
        digitalWrite(go_straight, LOW);
        digitalWrite(turn_around, LOW);
      }
      else
      {
        digitalWrite(turn_around, HIGH); //if there are all three walls then turn around
        digitalWrite(turn_right, LOW);
        digitalWrite(turn_left, LOW);
        digitalWrite(go_straight, LOW);
      }
    }
  }
}
