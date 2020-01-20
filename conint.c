#include <stdio.h>
#include<stdlib.h>
void main()
{
	for (int i = 0; i < 6; i++)
	{
		/* code */
	
	int a,b,t,count=0;
	scanf("%d",&a);
	scanf("%d",&b);
	if (a<b)
	{
		t=a;
	}
	else t=b;
	while(1){
		count++;
		if (a%t==0 && b%t==0)
	{
	printf("%d	%d\n",t,count );
		break;}
	t=t-1;
}}

}