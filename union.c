#include<stdio.h>
#include<string.h>
union persona{
	char nombre[10];
	char inicial;
}prebe;
int main(){
	char aux[20], a;
	puts("Dame tu nombre");
	gets(aux);
	strcpy(prebe.nombre,aux);
	puts("\ndame tu inicial");
	a=getchar();
	printf("\n Tu nombre es: %s",prebe.nombre);
	printf("\n Tu inicial es: %c",prebe.inicial);
}