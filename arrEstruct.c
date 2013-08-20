#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct  prebes{
	int semestre;
	char nombre[50];
	int edad;
	float promedio;
	//char  sexo;
};


int main(){
	int i, j;
	struct prebes var[4];
	for(i=0;i<=3;i++){
		printf("\n Ingresa el nombre: ");
		gets(var[i].nombre);
		printf("\n Ingresa la edad: ");
		scanf("%d",&var[i].edad);
		printf("\n Ingresa el semestre: ");
		scanf("%d",&var[i].semestre);
		printf("\n Ingresa el promedio: ");
		scanf("%f",&var[i].promedio);
		//printf("\n Ingresa el sexo: ");
		//scanf("%c",&var[i].sexo);
		getchar();
	}
	
	for(j=0;j<=3;j++){
		printf("\n\nEl alumno %s\n",var[j].nombre);
		printf("\nTiene %d anhos\n",var[j].edad);
		printf("\nVa en %d semestre\n",var[j].semestre);
		printf("\nTiene %f de promedio\n",var[j].promedio);
		//printf("\nSu sexo es: %c\n",var[i].sexo);
		                                                                                                                                                                                
	}
	


return 0;
}