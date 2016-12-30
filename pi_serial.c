#include <stdio.h>
#include <time.h>

#define N 1E5

main() {

	struct timeval start, end;
	int i;
	double W = 1.0 / N, W2, pi = 0.0;
	
		
	gettimeofday(&start, NULL);

	W2 = W * W;      
	W = 4 * W;

	for (i = 0; i < N; i++)
		pi += W / (1.0 + (0.5 + i) * (0.5 + i) * W2);
	printf("pi = %.10lf\n", pi);

	gettimeofday(&end, NULL);	

  	printf("%ld microseconds\n", ((end.tv_sec * 1000000 + end.tv_usec)
		  - (start.tv_sec * 1000000 + start.tv_usec)));
}
