/**
 *_is_prime -cheks if a number is prime
 *@n:the number to check
 *@d:counter
 *Return:1 if prime no else 0
 */
int _is_prime(int n, int d)
{
	if (n == d)
		return (1);
	else if (n % d != 0)
		return (_is_prime(n, d + 1));
	else
		return (0);
}
/**
 *is_prime_number-prints 1 if integer is prime number
 *else 0
 *@n:number to check
 *Return:1 if prime number else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_is_prime(n, 2));
}
