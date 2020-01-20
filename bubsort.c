#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}
void main(){
	//printf("Enter the number of integers you want to sort\n");
	for (int k = 0; k < 5; k++)
	{
		/* code */
	
	int n,i,flag=0;
	int count=0;
	scanf("%d",&n);
	int a[50];
	//printf("Enter the elements of the array\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; ++j) {
			count++;
			if (*(a + j) > *(a + j + 1)) {
				swap(a + j, a + j + 1);
				flag=1;
				
			}
			if (flag==0)
			{
				break;
			}
		}

	}
	printf("%d \t %d \n",flag, count );
}}