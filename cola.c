#include<stdio.h>
int inicio=-1;
int fin=-1;
int cola[4];
void mete(int numero);
int sale();
void listar();
int main(){
	int valor, numero, num;
	do{
		printf("\n\n1.-  Meter\n");
		printf("2.-  Sacar\n");
		printf("3.-  Salir\n");
		printf("4.-  Listar\n");
		scanf("%d",&valor);
		if(valor==1){
			
			printf("Usuario dame un numero: \n");
			scanf("%d",&numero);
			mete(numero);
		}else if(valor==2){
			if(fin>-1){
				num=sale();
			}else
				printf("La cola estA vacIA");
		}else
			listar();
		
	}while(valor!=3);
	return 0;
}

void mete(int numero){
	if(fin<5){
		fin++;
		cola[fin]=numero;
		printf("Se insertO exitosamente");
	}else
		printf("\nLa cola estA llena");
	if(fin==0){
	inicio++;
	}
	}


int sale(){
	int sea;
	{
		if(inicio<5){
			inicio++;
			sea=cola[inicio];
			printf("Se sacO exitosamente");
		}else
			printf("\nLa cola estA llena");
	}
	return sea;
}

void listar(){
	int i;
	if(fin >-1){
	printf("\nLos numeros en la cola son: ");
		for(i=inicio;i<=fin;i++){
			printf("%d  ",cola[i]);
		}
		}else {
			printf("\nLa cola estA vacIa\n");
			}
	}

