#include <stdio.h>
#include <stdlib.h>
#include <time.h> //ANSI prototype for time()
#include <limits.h> //In order to use INT_MAX

int main(void) {
	//Create a 2D dynamically-allcated array
	int n, m;
	printf("What is RAND_MAX? -> %d\nWhat is INT_MAX -> %d\n", RAND_MAX, INT_MAX);
	printf("Both INT_MAX and RAND_MAX are typically equivalent.\n");
	printf("Creating a 2D [n x m] array.\nEnter the value n for the first dimension.\n");
	scanf("%d", &n);
	printf("Enter the dimensions for the value m for the 2nd dimension.\n");
	scanf("%d", &m);
	double (* p)[m];
	size_t t;
	srand((unsigned int) time(&t));

	p = (double (*)[m])malloc((size_t) n * m * sizeof(double));
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= m; j++)
			p[i][j] = (double) (rand() % 100); //Random double-precision values between 1 and zero
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= m; j++)
			printf("array[%d][%d] == %f\n", i,j,p[i][j]);
	return 0;
}

	

