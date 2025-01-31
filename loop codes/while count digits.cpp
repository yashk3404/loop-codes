#include<stdio.h>
int main()
{
	int temp, n, count=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	temp=n;
	while(n!=0) {
		n/=10;
		count++;
	}
	printf("The number of digit(s) in %d is %d", temp, count);
	return 0;
}
