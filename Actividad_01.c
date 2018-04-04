//# E_Activiadad_01
//Actividad_01
#include <stdio.h>
#include <stdlib.h>

#define CONSTANTE 1

int variable1 = 0 ;
int variable2 = 1 ;

int funcion(double arg1, float *arg2);

int main()
{
	int variable3 = 0 ;
	double variable4 = 1 ;
	float variable5 = CONSTANTE ;
	
	variable3 = funcion(variable4, &variable5);
	
	printf(" %d" , variable3 );
	
	system ("pause");
	return 0 ;
}

int funcion(double arg1, float *arg2)
{
	arg1 = (double)(*arg2);
	
	return 'A';
}
