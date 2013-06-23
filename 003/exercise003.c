#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>


#define NUM1 100
#define NUM2 (NUM1 + 100)

int
main(int argc, char **argv)
{
	int num = 0;
	int i, j;

	while (1) {
		i = (int)sqrt(num + NUM1);
		j = (int)sqrt(num + NUM2);
		if ((int)pow(i, 2) == (num + NUM1) && 
				(int)pow(j, 2) == (num + NUM2)) {
			printf("The number is %d\n", num);
			exit(0);
		} else {
			num++;
			continue;
		}
	}
}
