#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	prinf("Size of a char: %lu  byte(s)", sizeof(char));
	prinf("Size of an int: %lu  byte(s)", sizeof(int));
	prinf("Size of a long int: %lu  byte(s)", sizeof(long int));
	prinf("Size of a long long int: %lu  byte(s)", sizeof(long long int));
	prinf("Size of a float: %lu  byte(s)", sizeof(float));
	return (0);
}
