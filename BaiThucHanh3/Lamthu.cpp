#include <stdio.h>

void TamGiac(int m)
{
	for (int i = 0;i<m;i++ )
		{
			for (int j = i; j<m;j++)
			{
				if (m-j+1>j)
				{
			printf("*",j);
	}
	else
	{printf(" ");
	}		
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

