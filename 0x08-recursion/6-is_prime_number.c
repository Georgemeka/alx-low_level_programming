#include "main.h"

/**
 * helper - helps prime function
 * @n: number to be checked
 * @i: helper int
 * Return: 0 if not prime, 1 if prime
 */

int helper(int n, int i)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (helper(i + 1, n));
	return (1);
}

/**
 * is_prime_number - checks if number is prime number
 * @n: integer to compare
 * Return: boolean
 */

int is_prime_number(int n)
{
int i = 2;

if (n < 2)
return (0);
return (helper(i, n));
}



