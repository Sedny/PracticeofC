#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

/* 100000 < profit <= 200000 */
#define BONUS1 (100000 * 0.010)
/* 200000 < profit <= 400000 */
#define BONUS2 (BONUS1 + (100000 * 0.075))
/* 400000 < profit <= 600000 */
#define BONUS3 (BONUS2 + (200000 * 0.050))
/* 600000 < profit <= 1000000 */
#define BONUS4 (BONUS3 + (200000 * 0.030))
/* profit > 1000000 */
#define BONUS5 (BONUS4 + (400000 * 0.015))



int
main(int argc, char **argv)
{
	long bonus;
	long profit;
	
	

	printf("This year you have gain: ");
	fflush(stdout);
	scanf("%ld", &profit);

	if (profit <= 100000) {
		bonus = profit * 0.010;
	} else if (profit > 100000 && profit <= 200000) {
		bonus = BONUS1 + (profit - 100000) * 0.075;
	} else if (profit > 200000 && profit <= 400000) {
		bonus = BONUS2 + (profit - 200000) * 0.050;
	} else if (profit > 400000 && profit <= 600000) {
		bonus = BONUS3 + (profit - 400000) * 0.030;
	} else if (profit > 600000 && profit <= 1000000) {
		bonus = BONUS4 + (profit - 600000) * 0.015;
	} else if (profit > 1000000) {
		bonus = BONUS5 + (profit - 1000000) * 0.010;
	}

	printf("At the last, you own: %ld\n", bonus);
	

	exit(0);
}
