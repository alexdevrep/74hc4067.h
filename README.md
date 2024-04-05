# Uso de la librería 74hc595

## Índice

1. Descarga e instalación
2. Clases
3. Métodos
4. Ejemplos de Uso

---

### Descarga e instalación

- En este mismo directorio nos vamos al botón ```code``` y descargamos el archivo comprimido .zip
- Una vez descargado copiamos ese archivo en el directorio Arduino => libraries
- Descomprimimos el archivo
- Dentro encontramos un programa de ejemplo donde controlamos los canales de entradas/salidas y mostramos un nivel alto en cada canal durante un segundo





---

### Clases 

En el archivo ```74hc4067.h``` hemos declarado una clase:

- HC4067



---

### Métodos

Los métodos de la clase de esta librería son los siguientes:
  
- ```.begin()```: Inicializa la clase, no requiere parámetros adicionales. 
- ```.mostrarCanal(int canal)```: Este método es el que permite seleccionar una de los canales analógicos en función de si los pines de control
  están a nivel alto o bajo, si todos los pines digitales están a nivel bajo podremos mostramos el canal 0 y si los pines digitales están a nivel alto 
  veremos el canal 15

---

### Ejemplos de Uso 

La librería trae 1 ejemplo de uso donde se ven todos los métodos disponibles.

Puedes verlo y descargarlo directamente pinchando en el siguiente enlace:
- <a href="https://github.com/alexdevrep/74hc4067.h/tree/main/ejemplo">Ejemplo de uso</a>
