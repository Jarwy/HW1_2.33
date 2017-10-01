#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int d,p,m,t,pf,tc;
	printf("Total distant per day(km):");
	scanf_s("%d",&d );
	printf("The price of one liter gasoline:");
	scanf_s("%d",&p);
	printf("How many kilometer consume one liter of gasoline :");
	scanf_s("%d", &m);
	printf("How many toll per day:");
	scanf_s("%d", &t);
	printf("How many parking fee per day:");
	scanf_s("%d", &pf);

	tc = d / m*p + t + pf;

	printf("Your total cost on commuting:%d\n", tc);

	system("pause");
	return 0;

	}