# adminProyFibo
Proyecto con git.
# include < stdio.h >
# include < stdlib.h >

int  main ()
{
	int num1 = 0 , num2 = 1 , x, num3, i;
	printf ( " Introducir el número de la sucesión \ n " );
	scanf ( " % d " , & x);
	para (i = 0 ; i = x; i ++)
        {
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
	}
	printf ( " % d " , num3);
	
	sistema ( " pausa " );
	devuelve  0 ;
}
