# GLOBAL SOLUTION 01 EDGE COMPUTING

# Projeto de Monitoramento Ambiental com Arduino

## Link para o simulador:
<https://wokwi.com/projects/396430011841560577>

## Descrição do Projeto
Este projeto visa monitorar a temperatura dos oceanos utilizando um sensor de temperatura DS18B20 e um display LCD 16x2 com interface I2C. As leituras de temperatura são exibidas em tempo real no display LCD, permitindo um monitoramento contínuo e preciso das condições ambientais.

## Como Funciona
O sensor DS18B20 mede a temperatura da água e envia os dados para o Arduino. O Arduino processa essas informações e as exibe no display LCD 16x2. Este sistema pode ser usado para monitorar a temperatura em aquários, tanques de peixes, estudos oceanográficos, entre outras aplicações ambientais.

## Componentes
Os componentes necessários para este projeto são:
* 1 x Arduino Uno (ou outro modelo compatível)
* 1 x Sensor de Temperatura DS18B20
* 1 x Display LCD 16x2 com Interface I2C
* Protoboard e Fios de Conexão

## Como Montar
1. **Conexão do Sensor DS18B20:**
   - Conecte o pino VCC do DS18B20 ao pino 5V do Arduino.
   - Conecte o pino GND do DS18B20 ao GND do Arduino.
   - Conecte o pino DQ do DS18B20 ao pino digital 2 do Arduino.
   - Coloque um resistor de 4.7kΩ entre o pino DQ e o pino VCC do DS18B20.

2. **Conexão do Display LCD 16x2 (I2C):**
   - Conecte o pino VCC do módulo I2C ao pino 5V do Arduino.
   - Conecte o pino GND do módulo I2C ao GND do Arduino.
   - Conecte o pino SDA do módulo I2C ao pino A4 do Arduino.
   - Conecte o pino SCL do módulo I2C ao pino A5 do Arduino.

## Imagem do projeto


## Problema solucionado
O monitoramento preciso e contínuo da temperatura é crucial em muitas aplicações ambientais para garantir a saúde e o bem-estar dos ecossistemas aquáticos. Este projeto fornece uma solução acessível e eficaz para medir e exibir a temperatura da água, permitindo intervenções rápidas em caso de mudanças indesejadas na temperatura.
