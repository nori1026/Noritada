#include <stdio.h>
#include <stdlib.h>

int redd(int n, int m){
	if(m==0)
		return 1;
	m--;
	return n*redd(n, m);	
}

double divisor(int l){
	if(l==1)
		return 1.0;
	return l*(divisor(l/2));
}

int fib(int i){
	if(i == 0)
		return 0;
	if(i == 1)
		return 1;
	return fib(i-1)+fib(i-2); 	
}

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod){
	if(n == 1){
		printf("\nMove disk 1 from rod %c to rod %c", from_rod, to_rod);
		return;
	}	

	towerOfHanoi(n-1, from_rod, aux_rod, to_rod);//A to B
	printf("\nMove disk %d from rod %c to rod %c", n, from_rod, to_rod);//move n
	towerOfHanoi(n-1, aux_rod, to_rod, from_rod);//B to C
}

int even(int num){
	if(num == 0)
		return 0;
	
	num -= 1;
	return even(num)+2;
}

int odd(int num){
	if(num == 0)
		return 1;
	num -= 1;
	return odd(num)+2;
}

//dynamic Programming sample
int fib2(int n, int memo[]){
	if(memo[n] != 0)
		return memo[n];
	
	if( n==1 || n==2)
		return 1;
	
	int result = fib2(n-1, memo)+fib2(n-2, memo);
	memo[n] = result;
	return result;
}

int main(){
	int x = redd(3, 4);//squares
	printf("%d\n", x);
	printf("%f\n", divisor(10));
	int i = 10;
	while(i > 0){
		printf("%d\n", i);
		i--;
	}
	
	//Fibonacci sequence
	int n=10;
	int j;
	printf("Fibonacci of %d\n", n);
	for(j=0;j<n;j++){
		printf("%d ", fib(j));
	}
	printf("\n");

	towerOfHanoi(3, 'A', 'C', 'B');
	printf("\n");

	int h=10;
	int z;
	printf("\n%d is number of even sequence\n", h);
	for(z=0; z<h; z++){
		printf("%d ", even(z));
	}
	printf("\n");

	int b=10;
	int y;
	printf("\n%d is number of odd sequence\n", b);
	for(y=0; y<b; y++){
		printf("%d ", odd(y));
	}
	printf("\n");

	FILE * fpointer = fopen("hello", "w+");
	fseek(fpointer, 7, SEEK_SET);
	fputs("Pen", fpointer);
	printf("Works!!\n");
	fclose(fpointer);

	//Fibonacci sequence with dynamo
	int t=9;
	int u;
	int arr[] = { 0 }; 
	printf("Fibonacci of %d\n", t);
	for(u=0;u<t;u++)
	{
		printf("%d ", fib2(u, arr));
	}
	printf("\n");

	int total = 1;
	switch(total){
		case 1:
			printf("%d\n", total);
			break;
		case 2:
			printf("%d\n", total);
			break;
		case 3:
			printf("%d\n", total);
			break;
		default:
			printf("Not available\n");
			break;

	}
	total=0;	
	total==1 ? printf("true\n") : printf("false\n");

	int pop=0;
	while(pop <= 10){
		printf("%d\n", pop);
		pop++;
	}
}
