#include<stdio.h>
               
int main(){
    //MENU
    float x,y;
    int opcion;
    float result;
    printf("Introduce el primer numero: ");
    scanf("%f",&x);
    printf("Introduce el segundo numero: ");
    scanf("%f",&y);
    printf("\n*******************************");
    printf("\n*             MENU            *");
    printf("\n*******************************");
    printf("\n 1. SUMAR");
    printf("\n 2. RESTAR");
    printf("\n 3. MULTIPLICAR");
    printf("\n 4. DIVIDIR");
    printf("\n 5. SALIR");
    printf("\n Elige una opcion (1-5): ");
    scanf("%d",&opcion);
    switch(opcion){
        case 1:
            result=x+y;
            break;
        case 2:
            result=x-y;
            break;
        case 3:
            result=x*y;
            break;
        case 4:
            if(y==0){
                printf("\nERROR, DIVISION ENTRE 0");
            }
            else{
                result=x/y;    
            }
           
            break;
        case 5:
            printf("\nADIOS");    
    }
    printf("\nresultado = %.2f",result);
   
    return 0;
}