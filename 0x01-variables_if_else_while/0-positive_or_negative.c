

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -assigns arandom number to n and printsif positive,zero, or negative
 * return: 0
 */
int main (void)
{
	int n,
	    srand (time(0));
	n=rand()-Rand_MAX /2;

	if(n>0)
		printf("%d is positive\n",n);
	else if (n==0)
		printf"%d is is Zero\n",n);
	else
		printf("%d is negative\n",n);

	return(0);

}
