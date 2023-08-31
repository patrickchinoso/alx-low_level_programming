#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function tells if an integer is a prime number or not
 * @n: number to determined
 * Return: 1 if n is a prime number, 0 if not a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - function tells if a number is prime recursively
 * @n: number to determined
 * @i: iterator
 *
 * Return: 1 if n is prime number, 0 if not a orime number
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
