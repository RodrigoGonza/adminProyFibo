#include<stdio.h>
#include<stdlib.h>

int main(){
	int num1=0,num2=1,x,num3,i;
	printf("Introduce el numero de la sucesion\n");
	scanf("%d",&x);
	for(i=0;i=x;i++){
		num3=num1+num2;
		num1=num2;
		num2=num3;
	}
	printf("El termino %d de la sucesion de Fibonacci es: %d",x,num3);
	
	system("pause");
	return 0;
}
