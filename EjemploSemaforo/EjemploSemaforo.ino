/////////////////////////////////////////////
// Deseo hacer un semáforo
/////////////////////////////////////////////

// Defino a que pines conectaré los leds
int ledRojo = 5;
int ledAmarillo = 6;
int ledVerde = 7;

int boton = 10;

// Inicializo los pines de los leds como salida
// y el puerto del botón como entrada
void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);

  pinMode(boton, INPUT);
}

void loop() {
  // Cuando el semáforo está en serivicio
  // enciende todas las luces
  if(digitalRead(boton)==HIGH){
    digitalWrite(ledVerde, HIGH);
    delay(900);
    digitalWrite(ledVerde, LOW);  
    digitalWrite(ledAmarillo, HIGH);
    delay(100);
    digitalWrite(ledAmarillo, LOW);  
    digitalWrite(ledRojo, HIGH);
    delay(1000);
    digitalWrite(ledRojo, LOW);  
  }else{
    // Cuando está fuera de servicio
    // tintinea la luz amarilla
    digitalWrite(ledAmarillo, HIGH);
    delay(50);
    digitalWrite(ledAmarillo, LOW);  
    delay(50);
  }
}
