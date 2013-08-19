#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct  prebes{
	int semestre;
	char nombre[50];
	int edad;
	float promedio;
	char  sexo;
};
int main(){
	struct prebes generacion;
	generacion.semestre=7;
	strcpy(generacion.nombre, "Antonio");
	generacion.edad=21;
	generacion.promedio=8.3;
	generacion.sexo='m';
	printf("Semestre: %i\n", generacion.semestre);
	printf("Nombre: %s\n", generacion.nombre);
	printf("Edad: %i\n", generacion.edad);
	printf("Promedio: %f\n", generacion.promedio);
	printf("Sexo: %c\n", generacion.sexo);


return 0;
}