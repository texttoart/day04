//#include <stdio.h>

int ft_iterative_factorial(int nb)

{
	int i;
	i = 1;
	int resultat;
	resultat = 1; 

	 if ( nb < 0 )

        {
                return 0;
        }

	while ( i<= nb )

	{
		resultat = resultat *i; // resultat *= i
		i++; 
	}

		return (resultat);

}
/*int main (void)
{

	printf( "valeur de !nb : %d\n" ,  ft_iterative_factorial() );

}*/
