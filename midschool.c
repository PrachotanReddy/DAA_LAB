#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int gcd(int a, int b) {
	if (a > b)
		gcd(b, a);
	int fact = 2;
	int gcd = 1;
	int z = a;
	int count=0;
	for (fact = 2; fact <= z; fact ++) {
		count++;
		while (((a % fact) == 0) && ((b % fact) == 0)) {
			count++;
			gcd = gcd * fact;
			b = b / fact;
			a = a / fact;
			if (a == 0 || b == 0)
				{printf("%d\t",count );
				return gcd;}
		}
	}
	printf("%d\t",count );
	return gcd;
}
void main()
{
	for (int i = 0; i < 6; i++)
	{
		/* code */
	
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d\n", gcd(a,b));
}}