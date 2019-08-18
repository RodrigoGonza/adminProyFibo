# adminProyFibo
Proyecto con git.
# include < stdio.h >
# include < stdlib.h >

int  main ()
{
	int num1 = 0 , num2 = 1 , x, num3, i;
	printf ( " Introducir el número de la sucesión \ n " ); //imprimr el texto en pantalla
	scanf ( " % d " , & x);
	para (i = 0 ; i = x; i ++) //Es el contador que se utilizara 
        {
		num3 = num1 + num2; // formula que se realizra para obtener el fibo de el numero que ingresa el usuario
		num1 = num2;
		num2 = num3;
	}
	printf ( " % d " , num3); // imprime el numero solicitado 
	
	sistema ( " pausa " );
	devuelve  0 ;
}
