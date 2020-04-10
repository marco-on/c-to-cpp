
//University of California Santa Cruz. C++ for C programmers, Part A. Ira Pohl. 1.8. min 8
#include <stdio.h>

void swap (int* i, int* j);
void swap_double (double* i, double* j);

int main (void)
{
	int m = 5, n = 10;
	double x = 5.3, y = 10.6;
	printf("inputs: %d, %d\n",m ,n);
	swap(&m, &n);
	printf("Outputs: %d, %d\n",m ,n);
	printf("Double inputs: %lf, %lf\n",x ,y);
	swap_double(&x, &y);
	printf("Double outputs: %lf, %lf\n",x ,y);
	return 0;
}

void swap (int* i, int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}
void swap_double (double* i, double* j)
{
	double temp = *i;
	*i = *j;
	*j = temp;
}
