#include <stdlib.h>
#include <time.h>
/* more headers go here */

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* ,y code goes here */
	return(0);
}
