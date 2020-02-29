//Name:Supriya Das   Roll:301910501008
//5. Store name and age of number of persons (number provided at run time). Collect the data and display data in the ascending order of age. Implement using structure. Write functions for memory allocation of the list, sorting and display of data.
#include <stdio.h>
#include <stdlib.h>
   
#define MAX_AGE 100

struct people{
	char name[20];
	int age;
};

int main()
{
	int num,i,j,k;
	int age_count[MAX_AGE] = {0};
	printf("Enter the number of people ::");
	scanf("%d[^\n]", &num);
	
	struct people* arr;
	arr=(struct people*)malloc(num*sizeof(struct people));
	
	printf("Enter the names in AGE NAME format ::\n");
	
	for(i=0;i<num;i++){
		scanf("%d %s[^\n]",&arr[i].age,&arr[i].name);
		age_count[arr[i].age]++;
		}
		
	for(i=0;i<MAX_AGE;i++)
		for(j=0,k=0;j<age_count[i]&&k<num;k++)
		{
			if(arr[k].age == i){
				printf("%d....%s\n",arr[k].age,arr[k].name);
				j++;
				}
		}
	return 0;
}
