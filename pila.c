#include<stdio.h>

int pila[4];
int fin=-1;
void push(int numero);
int pop();
void listar();
main(){
	int valor, numero, num;
	do{
		printf("\n\n1.-  Push\n");
		printf("2.-  Pop\n");
		printf("3.-  Salir\n");
		printf("4.-  Listar\n");
		scanf("%d",&valor);
		if(valor==1){
			printf("Usuario dame un numero: \n");
			scanf("%d",&numero);
			push(numero);
		}else if(valor==2){
			if(fin>-1){
				num=pop();
			}else
				printf("tu pila estA vacIA");
		}else
			listar();
		
	}while(valor!=3);
	return 0;
}
void push(int numero){
	if(fin<5){
		fin++;
		pila[fin]=numero;
		printf("Se insertO exitosamente");
	}else
		printf("\nTu pila estA llena");
}

int pop(){
	int sea;
	sea=pila[fin];
	fin--;
	return sea;
}

void listar(){
	int i;
	
	if(fin >-1){
	printf("\nLos numeros en la pila son: ");
		for(i=0;i<=fin;i++){
			printf("%d  ",pila[i]);
		}
		}else {
			printf("\nLa pila estA vacIa\n");
			}
	}
