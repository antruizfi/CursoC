#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void rellenar(int []){ //tipo de retorno y nombre y tipo de parametros

}

void main(){
	int a[6]={0};//para inicializar en 0 todo el arreglo
	
}
void rellenar(int a[6]){ //aqui si se define nombre de los parametros
	int i;
	for(i=0;i<6;i++){
		a[i]=rand() % 10; //serie de numeros pseudoaleatorios
	}
}