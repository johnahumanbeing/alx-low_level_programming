/**
 * find_sqrt_recursion - finds the natural square root of a number
 * @n: the given number
 * @counter: counter
 * Return: the natural square root, -1 is n doesn't have it
 */
int find_sqrt_recursion(int n, int counter)
{
	/* if number is perfect square */
	if (counter * counter == n)
		return (counter);
	else if (counter * counter < n)
		return (find_sqrt_recursion(n, counter + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the given number
 * Return: the natural square root, -1 if n doesn't have it
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (find_sqrt_recursion(n, 0));
}
