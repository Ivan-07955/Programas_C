#include<stdio.h>
//Posicion de memoria
int main (){ 
	//Definicion de variables
	int x;
	int *px;//px es un puntero a una variable de tipo entero
	x=3;
	px=&x;//px contiene la direccion de memoria x
	printf("x = %d direccion x=%p",x,&x);
	printf("desde px, x=%d",*px);
	return 0;
}