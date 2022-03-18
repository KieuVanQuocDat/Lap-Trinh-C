#include <stdio.h>
int main ()
{
	int n,tich=1,a,sum=0;
	printf("Hay nhap n : ");
	scanf("%d",&n);
	
	for ( a=1 ; a<=n;a++)
	{
	
		
		tich *= a;
		sum += tich;
		
	}
	

	printf("tong : %d",sum);
}


