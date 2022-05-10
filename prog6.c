#include <stdio.h>
void main()
{
	int arr[10],n,i,sum=0;

	//Assigning array to pointer
	int *ptr=arr;
	
	printf("Enter the number of elements you want to use(<=10): ");
	scanf("%d",&n);
	printf("\nEnter %d Elements:",n);
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("\n\nEntered elememts are\n");
	for (i=0;i<n;i++)
		printf("%d ",arr[i]);
	//sum of elements of array using pointer
	for (i=0;i<n;i++)
	{
		sum+=*ptr;
		*ptr++;
	}	

	//Display sum on screen
	printf("\nSum = %d\n",sum);
}
