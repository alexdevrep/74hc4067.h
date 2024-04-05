/*
  Archivo 74HC4067.cpp
  Este archivo contiene la implementación de la clase 74HC4067 así como
  los métodos begin() que inicializa la librería y el método mostrar canal
  que es la función que se encarga de controlar el integrado.

  Autor: Alexdevrep
  Fecha: 05/04/2024
  Más contenido interesante en :
    -GitHub: https://www.github.com/alexdevrep
    -Instagram: https://www.instagram.com/alexdevrep/
    -Mi blog de Wordpress: https://www.eltallerdealexdevrep.000webhostapp.com/
    -Youtube: https://www.youtube.com/channel/UCNlqgVY-CaQ2Lgc5xJChaKA
*/

#include "74hc4067.h"

// Instanciamos la clase HC4067
HC4067::HC4067(int S3, int S2, int S1, int S0)
{
    _S0 = S0;
    _S1 = S1;
    _S2 = S2;
    _S3 = S3;
}

// Métodos para la clase HC4067
// Método begin para inicializar los pines digitales

void HC4067::begin()
{
    pinMode(_S0, OUTPUT);
    pinMode(_S1, OUTPUT);
    pinMode(_S2, OUTPUT);
    pinMode(_S3, OUTPUT);
     digitalWrite(_S0, LOW);
        digitalWrite(_S1, LOW);
        digitalWrite(_S2, LOW);
        digitalWrite(_S3, LOW);
}

// Método para mostrar la entrada seleccionada
void HC4067::mostrarCanal(int canal)
{
    switch (canal)
    {
    case 0:
        digitalWrite(_S0, LOW);
        digitalWrite(_S1, LOW);
        digitalWrite(_S2, LOW);
        digitalWrite(_S3, LOW);
        break;
    case 1:
        digitalWrite(_S0, HIGH);
        digitalWrite(_S1, LOW);
        digitalWrite(_S2, LOW);
        digitalWrite(_S3, LOW);
        break;
    case 2:
        digitalWrite(_S0, LOW);
        digitalWrite(_S1, HIGH);
        digitalWrite(_S2, LOW);
        digitalWrite(_S3, LOW);
        break;
    case 3:
        digitalWrite(_S0, HIGH);
        digitalWrite(_S1, HIGH);
        digitalWrite(_S2, LOW);
        digitalWrite(_S3, LOW);
        break;
    case 4:
        digitalWrite(_S0, LOW);
        digitalWrite(_S1, LOW);
        digitalWrite(_S2, HIGH);
        digitalWrite(_S3, LOW);
        break;
    case 5:
        digitalWrite(_S0, HIGH);
        digitalWrite(_S1, LOW);
        digitalWrite(_S2, HIGH);
        digitalWrite(_S3, LOW);
        break;
    case 6:
        digitalWrite(_S0, LOW);
        digitalWrite(_S1, HIGH);
        digitalWrite(_S2, HIGH);
        digitalWrite(_S3, LOW);
        break;
    case 7:
        digitalWrite(_S0, HIGH);
        digitalWrite(_S1, HIGH);
        digitalWrite(_S2, HIGH);
        digitalWrite(_S3, LOW);
        break;
    case 8:
        digitalWrite(_S0, LOW);
        digitalWrite(_S1, LOW);
        digitalWrite(_S2, LOW);
        digitalWrite(_S3, HIGH);
        break;
    case 9:
        digitalWrite(_S0, HIGH);
        digitalWrite(_S1, LOW);
        digitalWrite(_S2, LOW);
        digitalWrite(_S3, HIGH);
        break;
    case 10:
        digitalWrite(_S0, LOW);
        digitalWrite(_S1, HIGH);
        digitalWrite(_S2, LOW);
        digitalWrite(_S3, HIGH);
        break;
    case 11:
        digitalWrite(_S0, HIGH);
        digitalWrite(_S1, HIGH);
        digitalWrite(_S2, LOW);
        digitalWrite(_S3, HIGH);
        break;
    case 12:
        digitalWrite(_S0, LOW);
        digitalWrite(_S1, LOW);
        digitalWrite(_S2, HIGH);
        digitalWrite(_S3, HIGH);
        break;
    case 13:
        digitalWrite(_S0, HIGH);
        digitalWrite(_S1, LOW);
        digitalWrite(_S2, HIGH);
        digitalWrite(_S3, HIGH);
        break;
    case 14:
        digitalWrite(_S0, LOW);
        digitalWrite(_S1, HIGH);
        digitalWrite(_S2, HIGH);
        digitalWrite(_S3, HIGH);
        break;
    case 15:
        digitalWrite(_S0, HIGH);
        digitalWrite(_S1, HIGH);
        digitalWrite(_S2, HIGH);
        digitalWrite(_S3, HIGH);
        break;
    }
}
