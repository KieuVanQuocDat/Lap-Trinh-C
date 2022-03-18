#include <stdio.h>

void TamGiac(int m)
{
	for (int i = 0;i<m;i++ )
		{
			for (int j = 0; j<=i;j++)
			{
			printf("*",j);
			
			}
			printf("\n");
		}
	
}

int main()
{
	int m;
	printf("Nhap m : ");
	scanf("%d",&m);
	TamGiac(m);
}	

