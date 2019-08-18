#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1=0,num2=1,x,num3=0,i;
	printf("Introduce el termino de la sucesion de Fibonacci que quieras saber:");
	scanf("%i",&x);
	
	for(i=1;i<=x;i++)
        {
		 num3=num1+num2;
		 num1=num2;
		 num2=num3;
		}
	printf("El termino %i de la sucesion de Fibonacci es: %i\n",x,num1);
	
	system("pause");
	return 0;
}
