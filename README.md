# 2005B1_TheStrictTeacher
Este repositorio contiene la solución al problema "2005B1 - The Strict Teacher" en Codeforces. El problema trata sobre dos maestros que intentan atrapar a un estudiante llamado David, quien está intentando esconderse de ellos porque no hizo la tarea. Hay n salones en los que David puede ocultarse, y una misma cantidad de salones donde los maestros pueden comenzar a buscar. Tanto el estudiante como los maestros solo pueden moverse entre salones adyacentes. El juego termina cuando uno o ambos maestros se encuentran en el mismo salón que el estudiante. De esa forma, el programa debe calcular la cantidad mínima de movimientos necesarios para que uno de los maestros logre encontrar a David.

Para tal efecto, en primer lugar se debe ordenar las posiciones tanto de los maestros como del etudiante. Posterior a ello, la solución consta de tres aspectos o situaciones. La primera cuando David se encuentra en los primeros salones, de esa forma la cantidad de movimientos sería la ubicación el profesor más cercano menos uno. Como segundo caso, se tiene que David se encuentra en los últimos salones, de esa forma, la cantidad de movimientos optimizados sería la cantidad de salones menos la ubicación inicial del profesor más cercano al estudiante. Por último, el tercer caso sucede cuando David se encuentra entre ambos maestros, en ese caso, la cantidad de movimientos sería el promedio entre la ubicación de los dos profesores más cercanos a David.

Video YouTube: https://youtu.be/wS6MyJc3P8Q
