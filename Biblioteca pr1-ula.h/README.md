# Biblioteca pr1-ula.h
Una biblioteca amistosa para un curso introductorio de programación

## Descripción
La asignatura “Programación 1”, cuyo objetivo es resolver problemas utilizando el lenguaje de programación C, necesita una estrategia amistosa en aras de facilitar el primer acercamiento de los estudiantes con la programación. Por lo tanto, los requerimientos principales de esta estrategia son: permitir la familiarización con la terminal de Linux y utilizar el lenguaje C. De esta forma, la biblioteca pr1-ula.h permite reflejar en la terminal de Linux tres aspectos: animaciones, colores y audios [leer más...](https://www.researchgate.net/publication/338547376_LE1_Una_estrategia_amistosa_para_un_curso_introductorio_de_programacion)

## Descarga
```bash
$ git clone https://github.com/perezj89/pr1-ula.git
```

## Compilación
### 64bits
```bash
$ gcc 64bits/pr1-ula.o ejemplo1.c -o ejemplo -lpthread
```
### 32bits
```bash
$ gcc 32bits/pr1-ula.o ejemplo1.c -o ejemplo -lpthread
```
## Ejecución
```bash
$ ./ejemplo
```
## Algunas animaciones realizadas con pr1-ula.h

* Kirby 2017 - https://www.youtube.com/watch?v=nu1pY54px-4
* Mario Bros 2019 - https://www.youtube.com/watch?v=HaTFxqipnSw
* Acuario 2019 - https://www.youtube.com/watch?v=ADkAIUw6LZg
