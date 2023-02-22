//#include <stdio.h>


int ft_recursive_power(int nb, int power)
{

			if ( power < 0 )
		{
				return (0);
		}

			if ( power == 0 )
		{
				return (1);
		}
			if ( power == 1 )
		{
				return (nb);
		}
		
			return ( nb * ft_recursive_power( nb, power -1));

}
/*
int main()
{
	int nb;
	int power;
	nb = -4;
	power = 5;
	printf ( "result : %d\n" , ft_recursive_power ( nb, power) );
	
}
*/
