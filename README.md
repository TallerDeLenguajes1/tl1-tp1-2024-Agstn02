# TP1

## 2 - a) 
*¿Por qué es conveniente incluirlo?*
Es conveniente incluir el archivo _.gitignore_ porque nos permite hacer excepciones al "tracking" de archivos. Es decir, git no buscara cambios para añadir en nuestro versionado. Nos premite ignorar archivos que no sirven en la estructura del programa, pero si pueden ayudarnos en el desarrollo.
*¿Como se debe hacer?*
Se debe crear un nuevo archivo de texto llamado _.gitignore_ y en el especificar lso archivos que deban ser ignorados.
*¿Como configuraría el archivo _.gitignore_?*
- #: caracter para escribir comentarios dentro del archivo gitignore. Puedes usarlo sin problema en cualquier parte del archivo siempre y cuando no sea sobre la misma línea de una omisión.
- /: con este catacter, especificas una ruta dentro del programa para omitir. Como es una ruta puede ser o bien, o una carpeta o archivos específicos. Si escoges una carpeta debes saber que todo lo de dentro se omitirá.
- *: este caracter es en sí un comodín. Con este podemos usarlo como una “propiedad” dentro de las omisiones. Por ejemplo, si queremos omitir todos los archivos tipo texto (txt) dentro del programa, usamos *.txt en la configuración.

_¿Como omitiria un archivo *ignorado.txt*?_:
Crearia el archivo _.gitignore_ y luego escribiría la linea:

`tp1/ignorado.txt`

## 3 - g)
Al mostrar la direccion de memoria de la variable y el contenido del puntero observamos que son iguales, esto se debe a que las variables de tipo puntero almacenan direcciones de memoria, y al asignar la dirección de la variable 'num' con el operador de dirección **"&"**,lo que almacena la variable puntero es la direccion de memoria de la variable 'num'. En el punto 4 devolvemos la dirección de memoria de la variable 'puntero', **&puntero**, que corresponde a SU PROPIA dirección y no a la de alguna otra variable.