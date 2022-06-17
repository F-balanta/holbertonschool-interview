#include "palindrome.h"
/**
 * is_palindrome - Main function to determine if is palindrome
 * @n : integer
 * Return int 
 */
int is_palindrome(unsigned long n)
{
	int remain, num, sum = 0;

	for (num = n; n != 0; n = n / 10)
	{
		remain = n % 10;
		sum = sum * 10 + remain;
	}
	if (num == sum)
		return (1);
	else
		return (0);
}