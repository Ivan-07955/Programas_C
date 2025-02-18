#include<stdio.h>
//FICHEROS BINARIOS
#define NPRODUC 3
int main(){
	struct Producto{
		int cod;
		char nombre[10];
		float precio;
	};
	struct Producto misProductos[NPRODUC];
	int cont;
	for(cont=0;cont<NPRODUC;cont++){
		printf("\ncodigo %d: ",cont+1);
		scanf("%d",&misProductos[cont].cod);
		printf("\nnombre producto %d: ",cont+1);
		scanf("%s",misProductos[cont].nombre);
		printf("\nprecio %d: ",cont+1);
		scanf("%f",&misProductos[cont].precio);
	}
	printf("\n CONTENIDO DE LA ESTRUCTURA: ");
	for(cont=0;cont<NPRODUC;cont++){
		printf("\n%d\t%s\t%.2f",misProductos[cont].cod,misProductos[cont].nombre,misProductos[cont].precio);
		
	}
	
	
	return(0);
}