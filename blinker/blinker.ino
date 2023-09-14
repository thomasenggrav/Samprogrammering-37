const int ledPin = 13;
const int BUTTON_PIN = 2;

bool buttonState = false;

void updateButton()
{
    buttonState = digitalRead(BUTTON_PIN);
}

void blinkLed()
{
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
}

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(BUTTON_PIN, INPUT);
    Serial.begin(9600);
}

void loop()
{
    updateButton();

    if(buttonState)
    {
        blinkLed();   
    }
}