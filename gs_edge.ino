#include <Wire.h> // Inclui a biblioteca Wire para comunicação I2C
#include <LiquidCrystal_I2C.h> // Inclui a biblioteca LiquidCrystal_I2C para controle do display LCD
#include <OneWire.h> // Inclui a biblioteca OneWire para comunicação com o sensor DS18B20
#include <DallasTemperature.h> // Inclui a biblioteca DallasTemperature para manipulação do sensor DS18B20

// Define o endereço I2C do display LCD
LiquidCrystal_I2C lcd(0x27, 16, 2); // Cria um objeto lcd com o endereço I2C e o tamanho do display

// Define o pino digital do Arduino ao qual o pino DQ do DS18B20 está conectado
#define ONE_WIRE_BUS 2 // O pino digital 2 será usado para comunicação com o sensor

// Configurações para a comunicação OneWire
OneWire oneWire(ONE_WIRE_BUS); // Cria um objeto OneWire para comunicação com o sensor DS18B20
DallasTemperature sensors(&oneWire); // Cria um objeto DallasTemperature para controlar o sensor DS18B20

void setup() {
  lcd.init(); // Inicializa o display LCD
  lcd.backlight(); // Liga a luz de fundo do display LCD
  
  sensors.begin(); // Inicializa a comunicação com o sensor DS18B20
  
  // Exibe uma mensagem inicial no display LCD
  lcd.setCursor(0, 0); // Move o cursor para a primeira linha, primeira coluna
  lcd.print("Temp Monitor"); // Exibe "Temp Monitor" na primeira linha
  lcd.setCursor(0, 1); // Move o cursor para a segunda linha, primeira coluna
  lcd.print("Iniciando..."); // Exibe "Iniciando..." na segunda linha
  delay(2000); // Aguarda 2 segundos
  lcd.clear(); // Limpa o display LCD
}

void loop() {
  sensors.requestTemperatures(); // Solicita uma leitura de temperatura do sensor
  
  float temperatureC = sensors.getTempCByIndex(0); // Obtém a temperatura em Celsius do primeiro sensor encontrado
  
  // Exibe a temperatura no display LCD
  lcd.setCursor(0, 0); // Move o cursor para a primeira linha, primeira coluna
  lcd.print("Temp: "); // Exibe "Temp: " na primeira linha
  lcd.print(temperatureC); // Exibe a temperatura lida na primeira linha após "Temp: "
  lcd.print(" C"); // Exibe " C" (Celsius) na primeira linha após a temperatura
  
  delay(1000); // Aguarda 1 segundo antes de atualizar a leitura
}
