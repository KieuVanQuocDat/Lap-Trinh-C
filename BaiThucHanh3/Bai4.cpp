#include <stdio.h>
#include<math.h>
void TamGiac(int h)
{
	for (int i=1 ; i<=h;i++)
		{
			for (int j=1 ; j<2*h; j++)
				{
					if (abs(h-j)<=(i-1) )
					{
					printf("*");
					}
					else 
					{
					printf(" ");
					}
				}
		
		printf("\n");
		}
}
	
	
int main ()
{
	int h;
	printf("Nhap h :  ");
	scanf("%d",&h);
	TamGiac(h);

 ;
}


