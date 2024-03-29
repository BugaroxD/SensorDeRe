int piezo = 7;

int length = 26;
char notes[] = "eeeeeeegcde fffffeeeeddedg";
int beats[] = {1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};
int tempo = 300;

boolean ledOnOff = true;

void playTone(int tone, int duration)
{
    for (long i = 0; i < duration * 1000L; i += tone * 2)
    {
        digitalWrite(piezo, HIGH);
        delayMicroseconds(tone);
        digitalWrite(piezo, LOW);
        delayMicroseconds(tone);
    }
}

void playNote(char note, int duration)
{
    char names[] = {'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C'};
    int tones[] = {1915, 1700, 1519, 1432, 1275, 1136, 1014, 956};

    // play the tone corresponding to the note name
    for (int i = 0; i < 8; i++)
    {
        if (names[i] == note)
        {
            playTone(tones[i], duration);
        }
    }
}

void setup()
{
    pinMode(piezo, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
}

void loop()
{
    for (int i = 0; i < length; i++)
    {
        if (notes[i] == ' ')
        {
            delay(beats[i] * tempo); // rest
            blinky();
        }
        else
        {
            playNote(notes[i], beats[i] * tempo);
            blinky();
        }

        // pause between notes
        delay(tempo / 2);
    }
}

void blinky()
{
    if (ledOnOff == true)
    {
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        ledOnOff = !ledOnOff;
    }
    else
    {
        digitalWrite(3, LOW);
        digitalWrite(2, HIGH);
        ledOnOff = !ledOnOff;
    }
}