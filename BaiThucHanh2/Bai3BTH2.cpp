#include<stdio.h>
int main()
{
	int n, a;
	float sum=0 ;
	printf("Hay nhap so nguyen n  ");
	scanf("%d",&n);
	
	for(a=1; a<=n; a++)
	{
		sum+= 1/(float)a;
		
	}
	printf("Tong : %f",sum);
}

