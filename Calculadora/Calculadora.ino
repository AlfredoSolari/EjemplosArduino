///////////////////////////////////////////////////////////
// Ejemplo de calculadora
///////////////////////////////////////////////////////////

// Variables inicializadas
float a;
float b;
float c;
char modo;

// Se inicializa la comunicación serial
void setup() {
  Serial.begin(9600);
}


void loop() {
  // Se comunican las instrucciones al usuario
  Serial.print("Introduce la operación que quieras hacer\n\t+: Suma\n\t-: Resta\n\t*: Producto\n\t/: División\n\tb: Bahaskara\n\tc: Caida libre\n\n");
  // Se espera por un mensaje del usuario
  while(!Serial.available()){}
  // El usuario decide el modo de uso
  modo = Serial.read();
  delay(100);
  // Aunque se envíen uno o más caracteres de fin se carrera se resuelve acá
  while(Serial.available()){
    Serial.read();
  }
  Serial.flush(); //Leo el caracter de enter

  // A partir del modo de uso se decide si hacer una suma, resta, etc
  switch(modo){
    case '+':
      Serial.println("Introduzca el primer sumando:");
      while(!Serial.available()){}
      a = Serial.parseFloat();
      while(Serial.available()){
        Serial.read();
      }
      Serial.println("Introduzca el segundo sumando:");
      while(!Serial.available()){}
      b = Serial.parseFloat();
      while(Serial.available()){
        Serial.read();
      }
      Serial.print(a);
      Serial.print("+");
      Serial.print(b);
      Serial.print("=");
      Serial.println(a+b);
      break;       
    case '-':
      Serial.println("Introduzca el primer operando:");
      while(!Serial.available()){}
      a = Serial.parseFloat();
      while(Serial.available()){
        Serial.read();
      }
      Serial.println("Introduzca el segundo operando:");
      while(!Serial.available()){}
      b = Serial.parseFloat();
      while(Serial.available()){
        Serial.read();
      }
      Serial.print(a);
      Serial.print("-");
      Serial.print(b);
      Serial.print("=");
      Serial.println(a-b);
      break;       
    case '*':
      Serial.println("Introduzca el primer operando:");
      while(!Serial.available()){}
      a = Serial.parseFloat();
      while(Serial.available()){
        Serial.read();
      }
      Serial.println("Introduzca el segundo operando:");
      while(!Serial.available()){}
      b = Serial.parseFloat();
      while(Serial.available()){
        Serial.read();
      }
      Serial.print(a);
      Serial.print("*");
      Serial.print(b);
      Serial.print("=");
      Serial.println(a*b);
      break;       
    case '/':
      Serial.println("Introduzca el primer operando:");
      while(!Serial.available()){}
      a = Serial.parseFloat();
      while(Serial.available()){
        Serial.read();
      }
      Serial.println("Introduzca el segundo operando:");
      while(!Serial.available()){}
      b = Serial.parseFloat();
      while(Serial.available()){
        Serial.read();
      }
      Serial.print(a);
      Serial.print("/");
      Serial.print(b);
      Serial.print("=");
      Serial.println(a/b);
      break;       
    case 'b':
      Serial.println("Introduzca el termino cuadrático (a):");
      while(!Serial.available()){}
      a = Serial.parseFloat();
      while(Serial.available()){
        Serial.read();
      }
      Serial.println("Introduzca el termino lineal (b):");
      while(!Serial.available()){}
      b = Serial.parseFloat();
      while(Serial.available()){
        Serial.read();
      }
      Serial.println("Introduzca el termino independiente (c):");
      while(!Serial.available()){}
      c = Serial.parseFloat();
      while(Serial.available()){
        Serial.read();
      }
      if(b*b-4*a*c >= 0){
        Serial.println("Las raices son:");
        Serial.println((-b+sqrt(b*b-4*a*c))/(2*a));
        Serial.println((-b+sqrt(b*b-4*a*c))/(2*a));
      }else{
        Serial.println("Las raíces son:");
        Serial.print(-b/(2*a));
        Serial.print("+");
        Serial.print((-b*b+4*a*c)/(2*a));
        Serial.println("i");
        
        Serial.print(-b/(2*a));
        Serial.print("-");
        Serial.print((-b*b+4*a*c)/(2*a));
        Serial.println("i");
      }
      break;       
    case 'c':
      Serial.println("Introduzca la altura:");
      while(!Serial.available()){}
      a = Serial.parseFloat();
      while(Serial.available()){
        Serial.read();
      }
      Serial.print("El tiempo demorado en tocar el piso es:\n");
      Serial.print("t = ");
      Serial.print(sqrt(a / 9.8));
      Serial.println(" segundos");
    
    }

  Serial.print("\n\n\n\n");

}
