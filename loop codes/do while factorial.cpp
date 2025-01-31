#include<stdio.h>
int main() {
	int n, factorial=1, i=1, temp;
	printf("Enter a number: ");
	scanf("%d", &n);
	temp=n;
    	do {
		factorial *=i;
		i++;
	    } while(i<=n);
	printf("Factorial of %d is %d", temp, factorial);
	return 0;
}

