#include <stdio.h>

int main()
{
	// kod za racunanje apsolutne vrednosti razlike dva broja a i b
	int a = 5;
	int b = 4;
	int c;
	
	if(a > b)
	{
		c = a - b; 
	}
	else
	{
		c = b - a;	
	}

	printf("Rezultat je c = %d", c);
	return 0;
}
