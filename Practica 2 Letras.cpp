#include <stdio.h>
#include <stdlib.h>

int main (){
float a,b,c;
char opt;

printf(" a.- Suma \n b.- Resta \n c.- Multiplicacion \n d.- Division");
printf(" \n Seleccione una opcion: ");
scanf("%f",&opt);
opt=getchar();
printf("Ingrese el primer operando: ");
scanf("%f",&a);
printf("Ingrese el segundo operando: ");
scanf("%f", &b);
switch(opt){
case 'A':
case 'a' :
    c=a+b;
    break;
case 'B':
case 'b':
    c=a-b;
    break;
case 'C':
case 'c':
    c=a*b;
    break;
case 'D':
case 'd':
    while (b==0){
        printf("Error, el segundo operando no puede ser 0");
        printf("Introduce el segundo operando:");
        scanf("%f", &b);
    }

    c=a/b;
    break;

    default:

    printf("Error, opcion invalida");
    opt=='R';
}
if (opt!='R')
{

    printf("El resultado es %0.2f", c);
   }
}
