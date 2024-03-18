#include <stdio.h>

void printResult(int c){

	printf("Rezultat je c = %d", c);
}

int Calculate(int a, int b){

	if(a < b)
		return b - a;
	else
		return a - b;

}

int main()
{

	// kod za racunanje apsolutne vrednosti razlike dva broja a i b
	int a = 3;
	int b = 8;
	int c = Calculate(a, b);

	// ispis rezultata
	printResult(c);

	return 0;
}
