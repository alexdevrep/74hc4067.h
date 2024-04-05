/*
  Archivo 74hc4067.h
  Este archivo contiene la declaración de la clase 74hc4067 que nos 
  va a permitir controlar el integrado 74hc4067 para que nos muestre
  el canal correspondiente con la llamada al método mostrarCanal.

  Autor: Alexdevrep
  Fecha: 05/04/2024
  Más contenido interesante en :
    -GitHub: https://www.github.com/alexdevrep
    -Instagram: https://www.instagram.com/alexdevrep/
    -Mi blog de Wordpress: https://www.eltallerdealexdevrep.000webhostapp.com/
    -Youtube: https://www.youtube.com/channel/UCNlqgVY-CaQ2Lgc5xJChaKA
*/

#ifndef HC4067_H
#define HC4067_H
#include <Arduino.h>

// Definimos la clase
class HC4067
{
public:
    HC4067(int S3, int S2, int S1, int S0);
    // Definimos los métodos de la clase
    void begin();
    void mostrarCanal(int canal);

private:
    int _S0;
    int _S1;
    int _S2;
    int _S3;
};

#endif
