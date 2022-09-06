#define blue1 0
#define yellow1 1
#define green1 2
#define red 3
#define green2 4
#define yellow2 5
#define blue2 6
#define button1 7
#define button2 8
#define button3 9
int contButton = 0;

void setup()
{
    pinMode(blue1, OUTPUT);
    pinMode(blue2, OUTPUT);
    pinMode(yellow1, OUTPUT);
    pinMode(yellow2, OUTPUT);
    pinMode(green1, OUTPUT);
    pinMode(green2, OUTPUT);
    pinMode(red, OUTPUT);
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);
    pinMode(button3, INPUT);
    for (int i = 0; i < 7; i++)
        digitalWrite(i, LOW);
}

void blink()
{
    for (;;)
    {
        digitalWrite(blue1, HIGH);
        digitalWrite(blue2, HIGH);
        digitalWrite(yellow1, HIGH);
        digitalWrite(yellow2, HIGH);
        digitalWrite(green1, HIGH);
        digitalWrite(green2, HIGH);
        digitalWrite(red, HIGH);
        delay(500);
        digitalWrite(blue1, LOW);
        digitalWrite(blue2, LOW);
        digitalWrite(yellow1, LOW);
        digitalWrite(yellow2, LOW);
        digitalWrite(green1, LOW);
        digitalWrite(green2, LOW);
        digitalWrite(red, LOW);
        delay(500);
        if (digitalRead(button2) == 1 || digitalRead(button3) == 1)
            break;
    }
}

void sequence()
{
    for (;;)
    {
        for (int i = 0; i < 7; i++)
        {
            digitalWrite(i, HIGH);
            delay(250);
            digitalWrite(i, LOW);
        }
        if (digitalRead(button1) == 1 || digitalRead(button3) == 1)
            break;
    }
}

void colorsEqual()
{
    for (;;)
    {
        for (int i = 0; i < 3; i++)
        {
            digitalWrite(blue1, HIGH);
            digitalWrite(blue2, HIGH);
            delay(250);
            digitalWrite(blue1, LOW);
            digitalWrite(blue2, LOW);
            delay(250);
        }
        for (int i = 0; i < 3; i++)
        {
            digitalWrite(yellow1, HIGH);
            digitalWrite(yellow2, HIGH);
            delay(250);
            digitalWrite(yellow1, LOW);
            digitalWrite(yellow2, LOW);
            delay(250);
        }
        for (int i = 0; i < 3; i++)
        {
            digitalWrite(green1, HIGH);
            digitalWrite(green2, HIGH);
            delay(250);
            digitalWrite(green1, LOW);
            digitalWrite(green2, LOW);
            delay(250);
        }
        for (int i = 0; i < 5; i++)
        {
            digitalWrite(red, HIGH);
            delay(250);
            digitalWrite(red, LOW);
            delay(250);
        }
        if (digitalRead(button1) == 1 || digitalRead(button3) == 1)
            break;
    }
}

void loop()
{
    if (digitalRead(button1) == 1)
    {
        blink();
        button2 == 0;
        button3 == 0;
        delay(400);
    }
    if (digitalRead(button2) == 1)
    {
        sequence();
        button1 == 0;
        button3 == 0;
        delay(400);
    }
    if (digitalRead(button3) == 1)
    {
        colorsEqual();
        button1 == 0;
        button2 == 0;
        delay(400);
    }
}