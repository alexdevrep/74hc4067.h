/*
  Archivo de ejemplo 
  Este archivo contiene un ejemplo de uso de la librería 74hc4067.h
  donde vamos a ir encendiendo un led a la vez por segundo comprobando
  el funcionamiento de los métodos definidos por la librería.

  Autor: Alexdevrep
  Fecha: 05/04/2024
  Más contenido interesante en :
    -GitHub: https://www.github.com/alexdevrep
    -Instagram: https://www.instagram.com/alexdevrep/
    -Mi blog de Wordpress: https://www.eltallerdealexdevrep.000webhostapp.com/
    -Youtube: https://www.youtube.com/channel/UCNlqgVY-CaQ2Lgc5xJChaKA
*/

//Incluimos la librería necesaria
#include <74hc4067.h>

//Declaramos el pin A0 
const int analogico = A0;

//Instanciamos el objeto de la clase HC4067
HC4067 modulo(7, 8, 9, 10);

//Definimos las condiciones de inicio
void setup() {
pinMode(analogico,OUTPUT);
modulo.begin();

}

//Definimos el código pricipal del proyecto
void loop() {
  for (int i=0; i<=4; i++){
    modulo.mostrarCanal(i);
    analogWrite(analogico,255);
    delay(1000);
  }
  
}
