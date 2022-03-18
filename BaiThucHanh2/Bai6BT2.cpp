#include <stdio.h>

int main ()
{
	int n,a;
	printf("Hay nhap n :  ");
	scanf("%d",&n);
	
	for(a=0;a<=n;a++)
	{
		if (a%7==0)
		{
			printf("\nSo khong lon hon n va chia het cho 7 la : %d",a);
		}
	}
	
}



