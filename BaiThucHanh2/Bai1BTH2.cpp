#include <stdio.h>

int main ()
{
	int n, a;
	printf("Hay nhap mot so nguyen n :    ");
	scanf("%d",&n);
	for(a=0;a<n;a++)
		{
			if(a%2==0)
			{	
				printf("\nCac so chan nho hon n la :  %d",a);
			}
			if(a%2==1)
			{
				printf("\nCac so le nho hon n la :  %d",a);
			}
		}
	
}


