int piezo = 3;
int blue1 = 11;
int yellow1 = 10;
int green1 = 9;
int green2 = 6;
int yellow2 = 5;
int blue2 = 4;

int a = 220.5;
int b = 247.3;
int c = 131;
int d = 147.2;
int e = 165;
int f = 174.3;
int g = 196;
int h = 123.5;
int i = 261.5;
int j = 295.1;

int sb = 500;
int mn = 400;
int sm = 250;
int cl = 150;

void setup()
{
    pinMode(piezo, OUTPUT);
    pinMode(blue1, OUTPUT);
    pinMode(yellow1, OUTPUT);
    pinMode(green1, OUTPUT);
    pinMode(green2, OUTPUT);
    pinMode(yellow2, OUTPUT);
    pinMode(blue2, OUTPUT);
}

void loop()
{
    tone(piezo, c);
    digitalWrite(blue1, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(blue1, 0);
    delay(cl);
    tone(piezo, c);
    digitalWrite(blue1, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(blue1, 0);
    delay(mn);

    tone(piezo, g);
    digitalWrite(yellow2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(yellow2, 0);
    delay(cl);
    tone(piezo, g);
    digitalWrite(yellow2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(yellow2, 0);

    delay(mn);

    tone(piezo, a);
    digitalWrite(blue2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(blue2, 0);
    delay(cl);
    tone(piezo, a);
    digitalWrite(blue2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(blue2, 0);

    delay(mn);

    // sing c
    tone(piezo, c);
    digitalWrite(blue1, 1);
    delay(sb);
    noTone(piezo);
    digitalWrite(blue1, 0);

    delay(mn);

    // sing 2
    tone(piezo, f);
    digitalWrite(green2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(green2, 0);
    delay(cl);
    tone(piezo, f);
    digitalWrite(green2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(green2, 0);
    delay(cl);

    tone(piezo, e);
    digitalWrite(green1, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(green1, 0);
    delay(cl);
    tone(piezo, e);
    digitalWrite(green1, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(green1, 0);
    delay(cl);

    tone(piezo, d);
    digitalWrite(yellow1, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(yellow1, 0);
    delay(cl);
    tone(piezo, d);
    digitalWrite(yellow1, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(yellow1, 0);
    delay(cl);

    tone(piezo, c);
    digitalWrite(blue1, 1);
    delay(sb);
    noTone(piezo);
    digitalWrite(blue1, 0);

    delay(mn);

    // sing 3
    tone(piezo, g);
    digitalWrite(yellow2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(yellow2, 0);
    delay(cl);
    tone(piezo, g);
    digitalWrite(yellow2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(yellow2, 0);
    delay(cl);

    tone(piezo, f);
    digitalWrite(green2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(green2, 0);
    delay(cl);
    tone(piezo, f);
    digitalWrite(green2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(green2, 0);
    delay(cl);

    tone(piezo, e);
    digitalWrite(green1, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(green1, 0);
    delay(cl);
    tone(piezo, e);
    digitalWrite(green1, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(green1, 0);
    delay(cl);

    tone(piezo, d);
    digitalWrite(yellow1, 1);
    delay(sb);
    noTone(piezo);
    digitalWrite(yellow1, 0);

    delay(mn);

    // sing 3
    tone(piezo, g);
    digitalWrite(yellow2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(yellow2, 0);
    delay(cl);
    tone(piezo, g);
    digitalWrite(yellow2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(yellow2, 0);
    delay(cl);

    tone(piezo, f);
    digitalWrite(green2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(green2, 0);
    delay(cl);
    tone(piezo, f);
    digitalWrite(green2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(green2, 0);
    delay(cl);

    tone(piezo, e);
    digitalWrite(green1, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(green1, 0);
    delay(cl);
    tone(piezo, e);
    digitalWrite(green1, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(green1, 0);
    delay(cl);

    tone(piezo, d);
    digitalWrite(yellow1, 1);
    delay(sb);
    noTone(piezo);
    digitalWrite(yellow1, 0);

    delay(mn);

    // sing 1
    tone(piezo, c);
    digitalWrite(blue1, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(blue1, 0);
    delay(cl);
    tone(piezo, c);
    digitalWrite(blue1, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(blue1, 0);

    delay(mn);

    tone(piezo, g);
    digitalWrite(yellow2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(yellow2, 0);
    delay(cl);
    tone(piezo, g);
    digitalWrite(yellow2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(yellow2, 0);

    delay(mn);

    tone(piezo, a);
    digitalWrite(blue2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(blue2, 0);
    delay(cl);
    tone(piezo, a);
    digitalWrite(blue2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(blue2, 0);

    delay(mn);

    // sing g
    tone(piezo, g);
    digitalWrite(yellow2, 1);
    delay(sb);
    noTone(piezo);
    digitalWrite(yellow2, 0);

    delay(mn);

    // sing 2
    tone(piezo, f);
    digitalWrite(green2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(green2, 0);
    delay(cl);
    tone(piezo, f);
    digitalWrite(green2, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(green2, 0);
    delay(cl);

    tone(piezo, e);
    digitalWrite(green1, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(green1, 0);
    delay(cl);
    tone(piezo, e);
    digitalWrite(green1, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(green1, 0);
    delay(cl);

    tone(piezo, d);
    digitalWrite(yellow1, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(yellow1, 0);
    delay(cl);
    tone(piezo, d);
    digitalWrite(yellow1, 1);
    delay(sm);
    noTone(piezo);
    digitalWrite(yellow1, 0);
    delay(cl);

    tone(piezo, c);
    digitalWrite(blue1, 1);
    delay(sb);
    noTone(piezo);
    digitalWrite(blue1, 0);

    delay(7000);
}