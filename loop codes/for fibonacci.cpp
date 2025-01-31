#include<stdio.h>
int main()
{
	int n, first=0, second=1, next;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("\n\n\n----------Fibonacci Series----------\n\n\n");
	for(int i=0; i<n; i++) {
		if(i==0) {
			printf("%d\n", first);
		} else if(i==1) {
			printf("%d\n", second);
		} else {
			next = first + second;
			printf("%d\n", next);
			first=second;
			second=next;
		}
	}
	return 0;
}
