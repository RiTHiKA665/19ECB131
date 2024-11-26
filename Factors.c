#include <stdio.h> 

// Function to print the divisors 
void printDivisors(int n) 
{ 
	for (int i = 1; i <= n; i++) 
		if (n % i == 0) 
			printf("%d ", i); 
} 
int main() 
{ 
	printf("The divisors of 100 are: "); 
	printDivisors(100); 

	return 0; 
}

/* OUTPUT
The divisors of 100 are: 1 2 4 5 10 20 25 50 100 */
