#include<stdio.h>
int main(){
	int numeros[2]; //es un vector
	int aux;
	numeros[0]=2;
	numeros[1]=3;
	printf("VAMOS A VER QUE ES NUMEROS[]");
	printf("\nnumeros=%p",numeros);
	printf("\nANTES DEL INTERCAMBIO: ");
	printf("\nnumeros[0]= %d",*numeros);
	printf("\nnumeros[1]= %d",*(numeros+1));
	//intercambio a tres bandas
	aux=numeros[0];
	numeros[0]=numeros[1];
	numeros[1]=aux;
	printf("\nDESPUES DEL INTERCAMBIO: ");
	printf("\nnumeros[0]= %d",numeros[0]);
	printf("\nnumeros[1]= %d",numeros[1]);
	return 0;
}