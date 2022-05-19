/* Autor: Oscar Vivaldi Partido Ramirez, realizado: 03/02/2022

programa que calcula el area de un circulo

*/

#include <stdio.h>

#include<math.h>

int main(){

float r, area;

//entrada de datos

printf("introduce el radio del circulo:");

scanf("%f",&r);

//proceso

area=M_PI*pow(r,2);

//salida

printf("el area del circulo es %f",area);

return 0;

}
