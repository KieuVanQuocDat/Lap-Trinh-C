#include <stdio.h>

void HCN(int m , int n)
{	
	for (int i=0; i<m ; i++)
	{
		for (int j=0; j<=n; j++)
		{
			printf("x",j);
		}
	printf ("\n");
	}
}
int main ()
{	int m,n;
	printf("Nhap m : ");
	scanf("%d",&m);
	printf("Nhap n : ");
	scanf("%d",&n);
	HCN(m,n);
	
	
	return 0 ;
}


