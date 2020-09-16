////////////////////////////////////////////
// Deseo encender y apagar un led 
// 5 veces por segundo
////////////////////////////////////////////

//Inicializo una variable con el número 
// del pin al que conectaremos el Led
int pinLed = 13;

// En el setup escribo lo que se ejecuta una
// única vez (configuración)
void setup() {
  // Configuro el pin como salida
  pinMode(pinLed, OUTPUT);
}

// En el loop debe ir todo aquel comportamiento
//   que se desea repetir
void loop() {
  // Se le da un voltaje alto(5V) al pin
  digitalWrite(pinLed, HIGH);
  // Se esperan 100 milisegundos
  delay(100);
  // Se le da un voltaje bajo(0V) al pin
  digitalWrite(pinLed, LOW);
  // Se esperan 100 milisegundos
  delay(100);
}
