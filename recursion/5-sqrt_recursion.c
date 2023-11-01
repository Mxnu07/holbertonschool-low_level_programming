/**
 * other - function to loop a second variable
 *
 * @n: int arg
 * @second: int arg
 *
 * Return: sqaure root
 */

int other(int n, int second)
{
	if (second * second == n)
	{
		return (second);
	}
	else if (second * second > n)
	{
		return (-1);
	}
	else
		return (other(n, second + 1));
}

/**
 * _sqrt_recursion - natural square root of a number
 *
 * @n: int arg
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (other(n, 0));
}
