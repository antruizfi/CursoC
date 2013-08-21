#include<stdio.h>
void modifica(int, int *);

void main(){
	int a, b;
	a=2;
	b=3;
	
	printf("Valor de a: %d\n",a);
	printf("valor de b: %d\n",b);
	
	modifica(a,&b); // => (lvalue,rvalue)
	printf("Valor de a: %d\n",a);
	printf("Valor de b: %d\n",b);
}

void modifica(int c, int *d){
	c=5;//sólo modifica la copia de la variable
	*d=6;//al pasar la dirección simodifica la variable
}