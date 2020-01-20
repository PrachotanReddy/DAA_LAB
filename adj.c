#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int a[20][20];
	int i=0;
	int j=0;
	printf("Enter the number of nodes in the graph\n");
	int n;
	scanf("%d",&n);
	printf("Enter the adjacency matrix for the graph\n");
	for (i = 0; i < n; i++)
	{
		int j=0;
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	i=j=0;
	for (i=0; i<n;i++)
	{
		printf("%c is adjacent to ",(97+i) );
		for (j = 0; j < n; j++)
		{ if (a[i][j]==1)
		{
			printf("%c", (97+j));
		}
	}}
	return 0;
}