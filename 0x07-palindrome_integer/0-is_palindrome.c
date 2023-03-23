#include "palindrome.h"
/**
 * is_palindrome - checks if unsigned integer is a palindome
 * @n: numbe to be checked
 *
 * Return: 1 if palindrome else 0
 */
int is_palindrome(unsigned long n)
{
	int ret = 1;
	unsigned long high = 1, low = 0;

	if (n < 10)
		return (ret);
	while (high <= n && low < 20)
	{
		low++;
		if (low < 20)
			high *= 10;
	}
	if (low < 20)
		high /= 10;
	low /= 2;
	while (low > 0)
	{
		if (n / high != n % 10)
			return (0);
		n = n % high;
		n /= 10;
		low--, high /= 100;
	}
	return (ret);
}
