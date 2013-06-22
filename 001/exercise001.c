#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int
main(int argc, char **argv)
{
	int i, j, k;
	int n = 0;

	for (i = 1; i < 5; i++) {
		for (j = 1; j < 5; j++) {
			for (k = 1; k < 5; k++) {
				if (i == j || i == k || j == k) {
					continue;
				} else {
					printf("%d%d%d    ", i, j, k);
					n++;
					if (n % 6 == 0)
						printf("\n");
				}
			}
		}
	}
}
