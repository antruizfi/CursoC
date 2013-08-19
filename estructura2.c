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
	int semestre;
	struct curso *cursito;//lleva a toda la estructura de curso
};

int main(){
	struct prebe p;
	struct curso c;
	
	
	
	return 0;
}