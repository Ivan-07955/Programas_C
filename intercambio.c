#include<stdio.h>
//Intercambio a tres bandas
void intercambia(int a,int b){
	int aux;
	aux=a;
	a=b;
	b=aux;	
}

int main(){
	int a;
	int b;
	int aux;
	a=2;
	b=3;
	printf("\nANTES DEL INTERCAMBIO: ");
	printf("\nA = %d",a);
	printf("\nb = %d",b);
	//Ahora hacemos el intercambio
	intercambia(a,b);
	printf("\nDESPUES DEL INTERCAMBIO: ");
	printf("\nA = %d",a);
	printf("\nb = %d",b);
	return 0;
}