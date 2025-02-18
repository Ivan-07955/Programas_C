#include<stdio.h>
#include<stdlib.h>
//preguntamos por los nombres de los tres reyes magos
int longitud(char *aux){
    int seguir=1;
    int cont=0;
    int nletras;
    while(seguir==1){
        if(*(aux+cont)!='\0'){//es lo mismo que aux[cont]
            seguir=1;
            cont++;
        }
        else{
            seguir=0;
        }
    }
    nletras=cont;
    return(nletras);
   
}


int main(){

    char *plista[3];
    char aux[10];
    int nletras;
    int cont;
    int seguir=1;
    //1.Leo el nombre del rey mago
    printf("\nDi el nombre del primer rey mago: ");
    //2. Lo guardo en aux
    scanf("%s",aux);
    //3. Cuento cuántas letras tiene
    nletras=longitud(aux);
    printf("\nnletras=%d",nletras);
    //4. Busco en la memoria RAM un hueco de ese tamaño
    //5. Obtengo la dirección de memoria donde está
    //ese hueco
    plista[0]=malloc((char *)size(char)*nletras); //es el acronimo de Memory ALLOCation
    for(cont=;cont<=nletras;cont++){
    	plista[cont]=aux[cont];
	}
	printf("\nEn su emplazamiento la palabra es: ");
	printf("\%s",*plista[0]);
    
    //6. Paso letra a letra el nombre del rey desde aux
    //hasta la ubicación definitiva

    /*printf("\nDi el nombre del segundo rey mago: ");
    scanf("%s",nombre2);
    printf("\nDi el nombre del tercero rey mago: ");
    scanf("%s",nombre3);
    //Los sacamos por patalla
    printf("\n1. %s",nombre1);    
    printf("\n2. %s",nombre2);
    printf("\n3. %s",nombre3);*/    
   
    return 0;
   
}