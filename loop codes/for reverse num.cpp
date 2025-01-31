#include<stdio.h>
int main()
{
	int n, remainder, reverse=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(;n!=0;n/=10) {
		remainder = n%10;
		reverse = reverse*10 + remainder;
	}
	printf("Reverse = %d", reverse);
	return 0;
}
