#include "ejercicioTAD.h"
#include <iostream>
#include <math.h>
#define PI 3.14



void procesarCuadrado(float lado){

    float area=0;
    float perimetro=0;

    area=lado*lado;
    perimetro=lado*4;

    printf("Perimetro: %f \n",perimetro);
    printf("Area: %f \n",area);


    return;
}

void procesarCirculo(float radio){

    float perimetro=0;
    float area=0;

    perimetro=radio*PI;
    area=PI*(pow(radio,2));

    printf("Perimetro: %f \n",perimetro);
    printf("Area: %f \n",area);



    return;
}

void procesarTriangulo(float lado){

    float perimetro=0;
    float area=0;

    perimetro=lado*3;
    area=(lado*lado)/2;


    printf("Perimetro: %f \n",perimetro);
    printf("Area: %f \n",area);


    return;
}

void procesarPentagono(float lado){

    float apotema=0;
    float perimetro=0;
    float area=0;

    perimetro=lado*5;
    apotema=lado/2*(tan(36));
    area=(perimetro*apotema)/2;

    printf("Perimetro: %f \n",perimetro);
    printf("Area: %f \n",area);


    return;
}

void procesarEsfera(float radio){

    float volumen=0;

    volumen=4/3 *PI*pow(radio,3);

    printf("Volumen:%f \n",volumen);

    return;
}

void procesarCilindro(float radio,float altura){

    float volumen=0;

    volumen=PI*pow(radio,2)*altura;

    printf("Volumen:%f \n",volumen);

}

void procesarOpcion(int opcion){

    float lado=0;
    float radio=0;
    float altura=0;

    if(opcion==1){
        printf("Usted selecciono cuadrado \n");
        printf("Ingrese el lado del cuadrado \n");
        scanf("%f",&lado);
        procesarCuadrado(lado);

    }
    if(opcion==2){
        printf("Usted selecciono circulo \n");
        printf("Ingrese el radio del circulo \n");
        scanf("%f",&radio);
        procesarCirculo(radio);

    }
    if(opcion==3){
        printf("Usted selecciono triangulo \n");
        printf("Ingrese el lado del triangulo equiplatero \n");
        scanf("%f",&lado);
        procesarTriangulo(lado);

    }
    if(opcion==4){
        printf("Usted selecciono pentagono \n");
        printf("Ingrese el lado del pentagono \n");
        scanf("%f",&lado);
        procesarPentagono(lado);

    }
    if(opcion==5){
        printf("Usted selecciono esfera \n");
        printf("Ingrese el radio de la esfera \n");
        scanf("%f",&radio);
        procesarEsfera(radio);

    }
    if(opcion==6){
        printf("Usted selecciono cilindro \n");
        printf("Ingrese el radio del cilindro \n");
        scanf("%f",&radio);
        printf("Ingrese la altura del cilindro \n");
        scanf("%f",&altura);
        procesarCilindro(radio,altura);

    }


    return;
}


