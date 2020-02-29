 /*    Name: Supriya Das   Roll No-301910501008     
 Assignment No-1    Question No-5
  STORE NAME AND AGE OF NO. OF PERSONS(NO. PROVIDED AT RUNTIME).DISPLAY THE DATA IN THE ASCENDING ORDER OF AGE.IMPLEMENT WITHOUT USING STRUCTURE.
                  WRITE FUNCTIONS FOR MEMORY ALLOCATION OF THE LIST,SORTING AND DISPLAY OF DATA.      */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void bubbleSort(int* age, char(*names)[50] , int n){
	int i,j,temp;
	char temp2[50];
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++)
        {
			if(age[j] > age[j+1])
			{
				temp=age[j+1];
				age[j+1]=age[j];
				age[j]=temp;
				strcpy(temp2,names[j+1]);
				strcpy(names[j+1],names[j]);
				strcpy(names[j],temp2);
			}
		}
	}
}

void display(int* age, char(*names)[50] , int n){
	int i;
	printf("Age\tName\n");
	for(i=0;i<n;i++){
		printf("%d\t",*(age+i));
		printf("%s\n",names[i]);
	}
}

int main(){
	int n,i;
	int* age;
	char (*names)[50];
	printf("Enter no of persons: ");
	scanf("%d",&n);

	age = (int*)malloc(n*sizeof(int));
	names = (char*)malloc(n*50);

	for(i=0;i<n;i++){
		printf("Enter name of person%d: ",i+1);
		scanf("%s",names[i]);
		printf("Enter age of person%d: ",i+1);
		scanf("%d",age+i);

	}

	bubbleSort(age, names, n);

	display(age, names, n);

	return 0;
}
