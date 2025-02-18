#include<stdio.h>

int main(){
	//Definicion de variables
	int tabla;
	int cont;
	//Me pide la tabla que quiere escribir
	printf("Dime la tabla que deseas (1-10): ");
	scanf("%d",&tabla);
	//Hago un bucle que muestra liene a linea la tabla
	for(cont=1;cont<=10;cont++){
		printf("\n%d x %d = %d",tabla,cont,tabla*cont);
	}
	return 0;
	
}