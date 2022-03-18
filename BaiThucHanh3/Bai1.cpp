#include <stdio.h>

void CN(int m, int n)
{	
	for (int i = 0; i < m ; i++){
	for ( int j = 1; j<=n ; j++ ){
	printf("%d", j);
}
printf("\n");
}
}

int main()
{
	int m,n;
	printf("Nhap m : ");
	scanf("%d",&m);
	printf("Nhap n : ");
	scanf("%d",&n);
	
	CN(m,n);
}
