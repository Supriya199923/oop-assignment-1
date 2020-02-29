//Name:Supriya Das  Roll:301910501008
//2. Implement a one dimensional array of integers where array size of the array will be provided during runtime. Accept the value for the elements and print those using pointers.
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int main()
{
	int *p,*q,n;
	printf("\nEnter the size:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("\nEnter the values:");
	for(q=p;q<=p+n-1;q++)
	{
		scanf("%d",q);
	}
	printf("\nThe result is:");
	for(q=p;q<=p+n-1;q++)
	{
		printf("\t%d",*q);
	}
	return 0;
}
