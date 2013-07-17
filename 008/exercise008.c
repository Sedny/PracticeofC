#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int
main(void)
{
	int i, j;
	int sum; 

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			sum = i * j;
			printf("%d * %d = %-4d", i, j, sum);
			if (j == i)
				printf("\n");
		}
	}
	exit(0);
}
