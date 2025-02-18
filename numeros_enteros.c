#include<stdio.h>
//Haz un programa que lea 5 numeros enteros y calcule la media

int main(){
	//Tipos de datos en C ANSI
	int numero; //%d, %i
	int cont;
	int suma=0;
	for(cont=1;cont<=5;cont++){
		printf("dime un numero entero: ");
		scanf("%d",&numero);
		suma=suma+numero;
	}
		printf("\nLa suma vale = %d",suma);
		printf("\nLa media vale = %f", suma/5);
		return 0;
}