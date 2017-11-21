# OS1-NET

OrbSlam2 comentado y modificado para pruebas de monocular slam por Alejandro Silvestri.

Se basa en el proyecto original ORB-SLAM2 de Raúl Mur Artal et al de la Universidad de Zaragoza.
https://github.com/raulmur/ORB_SLAM2
http://webdiis.unizar.es/~raulmur/orbslam/


#Agregados y modificaciones
- Utiliza un socket TCP para transmitir la matriz mTcw a un cliente que quiere conocer su ubicacion
- Se creo un CMakeLists para facilitar su compilacion
- Se creo el script installDependencies.sh para instalar todas las dependencias necesarias para el proyecto


# Aclaraciones
- En el main.cc se encuentran algunos parametros que estan hardcodeados para el enviroment que usamos de prueba. Cambiarlos!!