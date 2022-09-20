
const int TEMP_ENTRADA = A0;
const int SENSOR_LUZ_COLETOR = A1;
const int SENSOR_LUZ_EMISSOR = A2;
int valor_temperatura = 0;
int valor_luz_coletor = 0.0;

void setup()
{
    Serial.begin(9600);
    pinMode(TEMP_ENTRADA, INPUT);
    pinMode(SENSOR_LUZ_COLETOR, INPUT);
    pinMode(SENSOR_LUZ_EMISSOR, OUTPUT);
}

void loop()
{
    valor_luz_coletor = analogRead(SENSOR_LUZ_COLETOR);
    valor_temperatura = analogRead(TEMP_ENTRADA);
    Serial.print("Valor do coletor: ");
    Serial.println(valor_luz_coletor);
    Serial.print("Valor da temperatura: ");
    Serial.println(valor_temperatura);
    Serial.print("Valor da temperatura Celsius: ");
    Serial.println(calcularGrausCelsiu(valor_temperatura));
    delay(1000);
}

float calcularGrausCelsiu(float valor)
{
    float tensao = (valor / 1024.0) * 5.0;
    return (tensao - 0.5) * 100.0;
}

/*===========================================================*/

int TEMP_ENTRADA = A0;
int valor_temperatura = 0;

void setup()
{
    Serial.begin(9600);
    pinMode(TEMP_ENTRADA, INPUT);
}

void loop()
{
    valor_temperatura = analogRead(TEMP_ENTRADA);
    Serial.print("Valor da temperatura: ");
    Serial.println(valor_temperatura);
    Serial.print("Valor da temperatura Celsius: ");
    Serial.println(calcularGrausCelsiu(valor_temperatura));
    delay(1000);
}

float calcularGrausCelsiu(float valor)
{
    float tensao = (valor * 5.0) / 1024.0;
    return (tensao - 0.5) * 100.0;
}