#include<stdio.h>
#include<math.h>
int main()
{
	int n, temp, remainder, sum=0, digits=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	temp=n;
	for(;n>0;n/=10) {
		digits++;
	}
	n=temp;
	for(;n>0;n/=10) {
		remainder = n%10;
		sum+=pow(remainder,digits);
	}
	if(temp==sum) {
		printf("%d is an armstrong number.", temp);
	} else {
		printf("%d is not an armstrong number.", temp);
	}
return 0;
}
