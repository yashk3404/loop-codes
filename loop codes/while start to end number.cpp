#include<stdio.h>
int main()
{
	int s, e;
	printf("Enter the start number: ");
	scanf("%d",&s);
	printf("Enter the end number: ");
	scanf("%d",&e);
	while(s<=e) {
		printf("%d\n",s);
		s++;
	}
	return 0;
}
