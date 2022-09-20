int pinoBuzzer = 3;

int pinBttn1 = 6;
int pinBttn2 = 7;
int pinBttn3 = 8;

int valorBtn1;
int valorBtn2;
int valorBtn3;
//============================
void setup()
{
    pinMode(pinoBuzzer, OUTPUT);
    pinMode(pinBttn1, INPUT);
    pinMode(pinBttn2, INPUT);
}
//============================
void loop()
{
    valorBtn1 = digitalRead(pinBttn1);
    if (valorBtn1 == pinBttn2)
    {
        tone(pinoBuzzer, 196); // emite um tom (pino, frequencia)
    }
    else
    {
        noTone(pinoBuzzer); // desliga o buzzer
    }

    valorBtn2 = digitalRead(pinoBtn2);
    if (valorBtn2 == 1)
    {
        tone(pinoBuzzer, 123, 5); // emite um tom (pino, frequencia)
    }
    else
    {
        noTone(pinoBuzzer); // desliga o buzzer
    }

    valorBtn3 = digitalRead(pinBttn3);
    if (valorBtn3 == 1)
    {
        tone(pinoBuzzer, 131); // emite um tom (pino, frequencia)
    }
    else
    {
        noTone(pinoBuzzer); // desliga o buzzer
    }
}

CONST int TEMP_ENTRADA = AO;
int valor_temperatura = 0;

void setup()
{
    Serial.begin(9600);
    pinMode(TEMP_ENTRADA, INPUT);
}

void loop()
{
    valor_temperatura = analogRead(TEMP_ENTRADA);
    Serial.print("valor da temperatura: ");
    Serial.println(valor_temperatura);
    delay(1000);
}