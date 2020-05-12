// C program to demonstrate Basic Euclidean Algorithm
#include <stdio.h>

// Function to return gcd of a and b
int gcd(int a, int b)
{
int r =0;
	if (b == 0)
		return a;
	else
		r = a%b;
		return gcd(b, r);
}

// Driver program to test above function
int main()
{
	int a = 92, b = 72;
	printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));

	}
