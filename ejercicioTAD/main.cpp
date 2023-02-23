#include <iostream>
#include "ejercicioTAD.h"

using namespace std;

int main(){

    int opcion=0;

    printf("Segun la figura ingrese: \n");
    printf("#1 Cuadrado\n");
    printf("#2 Circulo\n");
    printf("#3 Triangulo (Equilatero)\n");
    printf("#4 Pentagono\n");
    printf("#5 Esfera\n");
    printf("#6 Cilindro\n");

    scanf("%d",&opcion);

    procesarOpcion(opcion);


    return 0;
}
