#include<stdio.h>

int main(){
	int k;
	char * apt=NULL;
	k=129;
	apt=&k; //almacena la dirección de k
	printf("Tamaño de un int * es: %d bytes \n",sizeof(int *));

	printf("la direcciOn de K: %X \n",&k); 
	printf("El valor de K es: %d",k);
	printf("-------");
	printf("contenido de la variable a la que apt: %x\n",apt);
	printf("Contenido de la variable a la que apunta apt: %d \n",*apt);
	printf("Direccion de apt: %x \n", &apt);

return 0;
}
