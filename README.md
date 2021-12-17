# QtCreator_IG
Proyecto de la asignatura Informática Gráfica para adquerir conceptos básicos de computación gráfica

## Manejo de la aplicación
Todo lo relativo a las teclas que hay que pulsar para ver los distintos objetos o activar los distintos modos de visualización se encuentra en el fichero [glwidget.cc](glwidget.cc)


## Generación de objetos simples
Podemos dibujar [tetraedro](tetrahedron.cc) y [cubo](cube.cc)

## Generación de objetos por revolución
Hemos creado un [cono](cone.cc), un [cilindro](cylinder.cc) y una [esfera](sphere.cc)

## Generación de objetos con formato PLY
El fichero [ply](ply.cc) contiene todo lo necesario para ello. Para elegir el fichero que queremos abrir, se debe poner el path que lo contiene en _fichero.open()_

## Generación de modelo jerárquico
En este caso yo he creado una batidora que consta de 3 grados de libertad y 5 niveles de jerarquía. [La batidora](batidora_jerarquico.cc) se compone de distintas partes: 

1. Tres piezas [base](base_batidora.cc)
2. Dos piezas [sujeccion](sujeccion.cc)
3. Dos piezas [varilla](varilla.cc)

Consta de movimientos que se pueden activar pulsando las teclas que se indican en _glwidget.cc_ y de animación automática.
