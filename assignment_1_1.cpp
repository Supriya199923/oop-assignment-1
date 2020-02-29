//Name:Supriya Das  Roll:301910501008
//1. Write a program that will have an integer variable and a pointer (say, p) pointing to it. Also have a pointer to pointer pointing to p. Take the value for the integer variable and print it using p, and pp.
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,*p,**pp;
	printf("\nEnter the integer:");
	scanf("%d",&x);
	p=&x;
	pp=&p;
	printf("\nUsing p=%d",*p);
	printf("\nUsing pp=%d",**pp);
	return 0;
}
