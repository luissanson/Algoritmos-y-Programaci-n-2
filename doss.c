#include<stdio.h>

int main(){
  int op,a;

printf("Eliga una opcion: \n");
  printf("Primera opcion\n");
   printf("Segunda opcion\n");
   scanf("%d",&op);


switch (op){

case 1: 

// Comprobar si un nuemro es positivo, negativo o cero//
printf("Ingresa un numero:\n");
 scanf("%d",&a);

if(a>0){
  printf("El numero es positivo");
  scanf("%d",&a);
}

if (a<0){
  printf("El numero es negativo");
  scanf("%d",&a);
  }

  if(a==0){
    printf("El numero es cero");
  }

default:
  break;


  case 2: 

  //tabla de multiplicar//
  
}





    return 0;
}