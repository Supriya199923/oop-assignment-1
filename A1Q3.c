//Name: Supriya Das   Roll:301910501008
/*					ASSIGNMENT 1 QUESTION 3
IMPLEMENTATION OF 2D ARRAY OF INTEGER USING 'PONTER TO ARRAY' AND 'ARRAY OF POINTERS'*/
#include<stdio.h>
#include<conio.h>
#define MAX 4
int main()
{
	int r,c,i,choice,arr[MAX][MAX],j;
	int (*ptr)[MAX];
	int *ptr1[MAX];
	while(1)
	{
		printf("\n1.Implementation of Pointer to Array");
		printf("\n2.Implementation of Array of Pointers");
		printf("\n3.Exit");
		printf("\n\nEnter your Choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					printf("\n\nPointer to Array Implementation :");
					ptr=arr;
					printf("\nEnter the size of the 2D Array (Max Input =4): ");
					scanf("%d%d",&r,&c);
					if(r<=0 || c<=0 || r>MAX || c>MAX)
					{
						printf("\n Invalid Input!");
						getch();
						continue;			
					}	
					printf("\n Enter the values in the array : ");
					for(i = 0; i < r; i++)
                        {
                           for(j = 0; j < c; j++)
                            {
                                       // (*(matrix + i) + j is equivalent to &matrix[i][j]
                                scanf("%d", (*(ptr + i) + j));
                             }
                    	}
						printf("\n\n Values You entered are :\n ");
						for(i=0;i<r;i++)
						{
						for(j=0;j<c;j++)
							printf("%d ",*(*(ptr+i) + j));
						printf("\n ");
    					}
	    				
	    				break;
	    		case 2:
						printf("\n\nArray of Pointer Implementation : ");
						printf("\nEnter the size of the 2D Array (Max Input =4): ");
						scanf("%d%d",&r,&c);
						if(r<=0 || c<=0 || r>MAX || c>MAX)
						{
							printf("\n Invalid Input!");
							
							continue;			
						}
						for(i=0;i<r;i++)
						ptr1[i]=arr[i];
						printf("\n Enter the values in the array : ");
						for(i=0;i<r;i++)
							for(j=0;j<c;j++)
								scanf("%d",(ptr1[i]+j));
						printf("\n\n Values You entered are :\n ");
						for(i=0;i<r;i++)
							{
								for(j=0;j<c;j++)
									printf("%d ",*(ptr1[i]+j));
								printf("\n ");
	    					}
	    				break;
	    		case 3:
	    				printf("\n Exiting Program...");
						exit(1); //function to exit the program
						break;
				default:
						printf("\n\tInvalid Input!!!");
						getch();//to hold the output until an input is given
						break;
	    	}
	}
return 0;
}
