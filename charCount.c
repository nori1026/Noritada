#include <stdio.h>

int main(){
	double nc;

	for(nc = 0; getchar() != EOF; ++nc)
		printf("%f\n", nc);
	printf("%f\n", nc);
	printf("done");
	return 0;
}
