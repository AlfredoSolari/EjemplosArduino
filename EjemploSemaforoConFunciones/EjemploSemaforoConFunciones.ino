/////////////////////////////////////////////
// Deseo hacer un semáforo
/////////////////////////////////////////////

// Defino a que pines conectaré los leds
#define LEDROJO 5
#define LEDAMARILLO 6
#define LEDVERDE 7

#define BOTON 10

// Encabezado de la función definida abajo
void encenderLED(int pin, int tiempo_ms);

// Inicializo los pines de los leds como salida
// y el puerto del botón como entrada
void setup() {
  pinMode(LEDROJO, OUTPUT);
  pinMode(LEDAMARILLO, OUTPUT);
  pinMode(LEDVERDE, OUTPUT);

  pinMode(BOTON, INPUT);
}

void loop() {
  // Cuando el semáforo está en serivicio
  // enciende todas las luces
  if(digitalRead(BOTON)==HIGH){
    encenderLED(LEDVERDE, 900);    
    encenderLED(LEDAMARILLO, 100);
    encenderLED(LEDROJO, 1000);
  }else{
    // Cuando está fuera de servicio
    // tintinea la luz amarilla
    encenderLED(LEDAMARILLO, 50);
    delay(50);
  }
}

void encenderLED(int pin, int tiempo_ms){
    digitalWrite(pin, HIGH);
    delay(tiempo_ms);
    digitalWrite(pin, LOW);    
}
