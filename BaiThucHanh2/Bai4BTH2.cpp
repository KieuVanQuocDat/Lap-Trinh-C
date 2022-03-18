#include <stdio.h>

int main ()
{
	int n,a,sum=0,sum2=0,sum1=0 ;
	printf("Hay nhap n :  ");
	scanf("%d",&n);
	
	for(a=0;a<=n;a++)
		{
			sum+=a;
			
			if(a%2==0)
			{
				sum1+=a;
				
			
			}
			
			if(a%2==1)
			{
				sum2+=a;
			}
			
			
		}
		printf("\nTong cac so tu nhien khong lon n: %d ",sum);
		printf("\nTong cac so tu nhien chan khong lon hon n: %d ", sum1);
		printf("\nTong cac so tu nhien le khong lon hon n: %d ", sum2);
	
}

