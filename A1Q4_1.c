//Name:Supriya Das    Roll:301910501008
//4. Implement the programs in Q.2 and 3 breaking it into functions for i) getting the dimensions from user,  ii) dynamic memory allocation, iii) accepting the values and iv) printing the values.
#include<stdio.h>
#include<stdlib.h>
int get_val();
void dyna_memo(int **,int);
void input(int *,int );
void output(int *,int );

int main()
{
	int i;
	int *p;
	i=get_val();
	if(i<=0)
		{
			printf("\n Invalid Input");
			return 0;
		}
	dyna_memo(&p,i);
	input(p,i);
	output(p,i);
	return 0;
}

int get_val()
{
	int n;
	printf("\n Enter the size of Array: ");
	scanf("%d",&n);
	return n;
}

void dyna_memo(int **p,int i)
{
	*p=(int*)malloc(i*sizeof(int));
}

void input(int *p,int i)
{
	int j;
	printf("\n Enter the elements in Array: ");
	for(j=0;j<i;j++)
		scanf("%d",(p+j));
}

void output(int *p,int i)
{
	int j=0;
	printf("\n The Array you entered is: ");
	for(j=0;j<i;j++)
		printf("%d ",*(p+j));
}
