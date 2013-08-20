#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct curso{
	char nombre[20];
	float califCurso;
};

struct prebe{
	char nombre[20];
	float promedio;
	int semestre;
	struct curso *cursito;//lleva a toda la estructura de curso
};

int main(){
	struct prebe p;
	struct curso c;
	strcpy(c.nombre,"Curso C");
	strcpy(p.nombre,"Pedro");
	p.semestre=1;
	p.promedio=9.8;
	strcpy(p.cursito->nombre,c.nombre);
	printf("Curso: %s \n",p.cursito->nombre);
	printf("Nombre: %s \n",p.nombre);

	printf("Semestre: %i \n",p.semestre);

	printf("Promedio: %f\n",p.promedio);

	return 0;
}