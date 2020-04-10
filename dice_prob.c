//monte carlo simulation
//simulation random... not deterministic
//University of California Santa Cruz. C++ for C programmers, Part A. Ira Pohl. 1.3. min 4
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIDES 6
#define R_SIDE (rand() % SIDES + 1)

int main (void)
{
	static int n_dice = 2;
	int j;
	int d1, d2, trials;
	
	int* outcomes = malloc ((n_dice * SIDES +1) * sizeof(int));
	
	srand(clock());
	printf("\nEnter number of trials: ");
	scanf("%d", &trials);
	for (j = 0 ; j < trials ; ++j)
		outcomes[(d1=R_SIDE)+(d2=R_SIDE)]++;
	printf("Probability\n");
	for (j=2 ; j < n_dice * SIDES + 1 ; ++j)
		printf("j=%d p=%lf\n", j, (double)(outcomes[j])/trials);
	return 0;
}