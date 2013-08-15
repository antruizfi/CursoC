#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void rellenar(int []); //tipo de retorno y nombre y tipo de parametros

void imprimir(int []);
void main(){
	int a[6]={0};//para inicializar en 0 todo el arreglo
	rellenar(a);//solo se indica el nombre del arreglo
	imprimir(a);
	
}
void rellenar(int a[6]){ //aqui si se define nombre de los parametros
	int i;
	for(i=0;i<6;i++){
		a[i]=rand() % 10; //serie de numeros pseudoaleatorios genera numeros entre 0 y 9
	}
}
void imprimir(int a[6]){ //aqui si se define nombre de los parametros
	int i;
	for(i=0;i<6;i++){
		printf("%d  ",a[i]); //imprime arreglo
	}
}
