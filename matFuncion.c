#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define R 6 //las macros se resuleven en tiempo de precompilado
#define C 6 //sustituyen los valores

void rellenar(int [][C]); //tipo de retorno y nombre y tipo de parametros
void imprimir(int [][C]);//siempre debe incluirse el NUMERO DE COLUMNAS

void main(){
	int a[R][C]={0};//para inicializar en 0 todo el arreglo
	rellenar(a);//solo se indica el nombre del arreglo
	imprimir(a);
}
void rellenar(int a[R][C]){ //aqui si se define nombre de los parametros
	int i, j;
	srand(time(NULL)); 
	for(i=0;i<R;i++){
		for(j=0;j<C;j++)//se agrego este ciclo
			a[i][j]=rand() % 10; //serie de numeros pseudoaleatorios genera numeros entre 0 y 9
	}
}
void imprimir(int a[R][C]){ //aqui si se define nombre de los parametros
	int i, j;
	
	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			printf("%d\t ",a[i][j]); //imprime arreglo
			
		}
		puts("");
	}
}
