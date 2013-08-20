#include<stdio.h>
#include<string.h>
enum{primero=6, segundo, tercero=10, cuarto};


int main(){
	int suma;
	suma=primero+segundo+tercero+cuarto;
	printf("la suma es %i\n",suma);
}