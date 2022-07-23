#include <Arduino.h>

//DONANIM PLUS ELEKTRONİK
//TASARIM TOLGA SOYTEPE
//JOYSTİCK İLE ÇİFT SERVO KONTROLÜ
#include <Servo.h> // SERVO KÜTÜPHANESİNİ EKLİYORUZ

int yatayservo = 3; // YATAY SERVO PİNİ
int dikeyservo = 4; // DİKEY SERVO PİNİ
int yataypotpin = A0; //JOYSTİCK YATAY POT PİNİ
int dikeypotpin = A1; // JOYSTİCK DİKEY POT PİNİ
int yatayservoMin = 0; // YATAY SERVO MİNİMUM DEĞERİ
int yatayservoMax = 180; //YATAY SERVO MAX DEĞERİ
int dikeyservoMin = 0; // DİKEY SERVO MİN DEĞERİ
int dikeyservoMax = 180; // DİKEY SERVO MAX DEĞERİ

int pushButton = 5; // JOYSTİCK BUTON PİNİ
int led=10; // BUTON İLE YAKACAĞIMIZ LED PİNİ

Servo YatayServo; // YATAY VE DİKEY SERVOLARI TANIMLADIK
Servo DikeyServo;
 
int YatayPotDegeri;
int YatayServoPozisyon; // POZİSYONLARI ATAYACAĞIMIZ DEĞİŞKENLERİ TANIMLADIK
int DikeyPotDegeri;
int DikeyServoPozisyon;
 
void setup()
{
  Serial.begin(9600);
  YatayServo.attach(yatayservo);
  DikeyServo.attach(dikeyservo); // GEREKLİ GİRİŞ ÇIKIŞLARI BELİRLEDİK
  pinMode(pushButton, INPUT);
  pinMode(led,OUTPUT);
  
}
 
void loop()
{
int buttonState = digitalRead(pushButton); // BUTONDAN HIGH DEĞERİ GELİYORSA YAK KOŞULUNU OLUŞTURDUK
  if(buttonState==HIGH){
    digitalWrite(led,HIGH);
    }
    else
    {
      digitalWrite(led,LOW);
      }
    
  YatayPotDegeri  = analogRead(yataypotpin);// ANALOG DEĞERLERİ OKUYUP DEĞİŞKENLERE YAZDIRDIK
  DikeyPotDegeri  = analogRead(dikeypotpin);
  
  YatayServoPozisyon  = map(YatayPotDegeri, 0, 1023, yatayservoMin , yatayservoMax); //POTTAN GELEN 0-1023 DEGERİNİ 0-180 E ORANLADIK
  DikeyServoPozisyon  = map(DikeyPotDegeri, 0, 1023, yatayservoMin , yatayservoMax);
  
  YatayServo.write(YatayServoPozisyon); // ÇIKAN SONUÇLARI SERVOLARA YAZDIRDIK
  DikeyServo.write(DikeyServoPozisyon);
  Serial.print("YATAY POZİSYON= ");
  Serial.println(YatayServoPozisyon);
  Serial.print("DİKEY POZİSYON= ");
  Serial.println(DikeyServoPozisyon);
  
  
  delay(100); // ARDUİNONUN SAĞLIKLI ÇALIŞABİLMESİ İÇİN 10 MS'LİK BİR BEKLEME SÜRESİ EKLEDİK
}