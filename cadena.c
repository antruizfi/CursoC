#include<stdio.h>
#include<string.h>

int main(){
	char nombre[20];
	char apellido[]=" soy yo";
	strcpy(nombre,"YO");
	printf("%s\n\n",nombre);
	strcat(nombre, apellido);
	printf("%s\n",nombre);
	printf("%s\n",apellido);
	return 0;
}