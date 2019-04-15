#include <stdio.h>
#include <stdlib.h>
#define T 3
#define LIBRE 0
#define OCUPADO 1
typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
} eEmpleado;

void cargarEmpleados(eEmpleado lista[]);
void mostrarUnempleado(eEmpleado unEmpleado);
void mostrarLista(eEmpleado lista[]);

int buscarLibre(eEmpleado[],int);
void inicializarEmpleados(eEmpleado[]);


/*
int buscarUno(eEmpleado[],int,int);
int borrarUno(eEmpleado[],int,int);
*/

int main()
{

    eEmpleado uno = {1,"mario","m",12000,20000};
    eEmpleado dos = {2,"luis","m",9000,15000};
    eEmpleado tres= {3,"miguel","m",5000,32000};
    eEmpleado lista[T];


    mostrarLista(lista,T);
    inicializarEmpleados(lista,T);
    indice=buscarLibre(lista,T);
    lista(indice)=uno;
    indice=buscarLibre(lista,T);
    lista(indice)=dos;




    eEmpleado unEmpleado;
    eEmpleado otroEmpleado;

    cargarEmpleados(lista);
    mostrarLista(lista);

/*
int i;
for (i=0;i<T;i++)
{
    printf("Ingrese legajo: ");
    scanf("%d", &lista[i].legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(lista[i].nombre);
    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &lista[i].sexo);
    printf("Ingrese sueldo bruto: ");
    scanf("%f", &lista[i].sueldoBruto);
    lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;
}
*/
/*
for(i=0;i<T;i++){
    mostrarEmpleado(lista[i]);



}

*/

/*

    otroEmpleado = unEmpleado;
 unEmpleado.legajo = 7000;
    printf("%d-%s-%c-%f-%f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

 printf("%d-%s-%c-%f-%f\n", otroEmpleado.legajo,otroEmpleado.nombre, otroEmpleado.sexo, otroEmpleado.sueldoBruto,otroEmpleado.sueldoNeto);

mostrarEmpleado(unEmpleado);

mostrarEmpleado(otroEmpleado);

*/
    return 0;
}



void cargarEmpleados(eEmpleado lista[]){

int i;
for (i=0;i<T;i++)
{
    printf("Ingrese legajo: ");
    scanf("%d", &lista[i].legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(lista[i].nombre);
    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &lista[i].sexo);
    printf("Ingrese sueldo bruto: ");
    scanf("%f", &lista[i].sueldoBruto);
    lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;
}

}





void mostrarLista(eEmpleado lista[])
{

int i;
for(i=0;i<T;i++){
mostrarUnempleado(lista[i]);

}

}



void mostrarUnempleado(eEmpleado unEmpleado){

printf("%d-%s-%c-%f-%f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

}



int buscarLibre(eEmpleado[],int){





}
void inicializarEmpleados(lista){
int i;
for(i=0;i<T;i++){



}




}



#include <stdio.h>
#include <stdlib.h>
#define T 3
#define LIBRE 0
#define OCUPADO 1
typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
} eEmpleado;

void cargarEmpleados(eEmpleado lista[]);
void mostrarUnempleado(eEmpleado unEmpleado);
void mostrarLista(eEmpleado lista[]);

int buscarLibre(eEmpleado[],int);
void inicializarEmpleados(eEmpleado[]);


/*
int buscarUno(eEmpleado[],int,int);
int borrarUno(eEmpleado[],int,int);
*/

int main()
{

    eEmpleado uno = {1,"mario","m",12000,20000};
    eEmpleado dos = {2,"luis","m",9000,15000};
    eEmpleado tres= {3,"miguel","m",5000,32000};
    eEmpleado lista[T];


    mostrarLista(lista);
    inicializarEmpleados(lista);
    indice=buscarLibre(lista);
    lista(indice)=uno;
    indice=buscarLibre(lista);
    lista(indice)=dos;



    eEmpleado unEmpleado;
    cargarEmpleados(lista);
    mostrarLista(lista);

/*
int i;
for (i=0;i<T;i++)
{
    printf("Ingrese legajo: ");
    scanf("%d", &lista[i].legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(lista[i].nombre);
    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &lista[i].sexo);
    printf("Ingrese sueldo bruto: ");
    scanf("%f", &lista[i].sueldoBruto);
    lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;
}
*/
/*
for(i=0;i<T;i++){
    mostrarEmpleado(lista[i]);



}

*/

/*

    otroEmpleado = unEmpleado;
 unEmpleado.legajo = 7000;
    printf("%d-%s-%c-%f-%f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

 printf("%d-%s-%c-%f-%f\n", otroEmpleado.legajo,otroEmpleado.nombre, otroEmpleado.sexo, otroEmpleado.sueldoBruto,otroEmpleado.sueldoNeto);

mostrarEmpleado(unEmpleado);

mostrarEmpleado(otroEmpleado);

*/
    return 0;
}



void cargarEmpleados(eEmpleado lista[]){

int i;
for (i=0;i<T;i++)
{
    printf("Ingrese legajo: ");
    scanf("%d", &lista[i].legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(lista[i].nombre);
    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &lista[i].sexo);
    printf("Ingrese sueldo bruto: ");
    scanf("%f", &lista[i].sueldoBruto);
    lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;
}

}





void mostrarLista(eEmpleado lista[])
{

int i;
for(i=0;i<T;i++){
mostrarUnempleado(lista[i]);

}

}



void mostrarUnempleado(eEmpleado unEmpleado){

printf("%d-%s-%c-%f-%f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

}



int buscarLibre(eEmpleado[],int){





}
void inicializarEmpleados(lista){
int i;
for(i=0;i<T;i++){



}




}




int buscarUno(eEmpleado[],int,int){





}
int borrarUno(eEmpleado[],int,int){





}
