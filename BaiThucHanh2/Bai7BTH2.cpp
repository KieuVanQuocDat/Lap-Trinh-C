#include <stdio.h>

int main ()
{
	int n,a;
	printf ("Hay nhap n :   ");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		if(n%a==0)
		printf("\nUoc cua n la :  %d",a);
	}
	
}


