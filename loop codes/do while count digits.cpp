#include<stdio.h>
int main()
{
	int n, temp, count=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	temp=n;
	do {
		n /= 10;
		count++;
	} while(n!=0);
	printf("The number of digits in %d is %d", temp, count);
	return 0;
}
