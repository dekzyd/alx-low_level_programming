#include <stdio.h>

/**
 * new_func - check if n is divisible by 3,5,7 or 9
 * @a: The odd divisor
 * @n: The number to be checked
 *
 * Return: a and n.
 */
int new_func(int a, int n)
{
	if (a > 9)
		return (1);
	if (n % a == 0)
		return (0);
	return (new_func(a + 2, n));
}
/**
 * is_prime_number - check if number is prime
 * @n: the number to be checked
 *
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	if (n % 2 == 0)
		return (0);
	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	return (new_func(3, n));
}
