#include <stdio.h>

void Nhap(int *arr, int n)
{
	int i ;
	while (n<=0)
	{
		printf("Hay nhap gia tri n >0 ");
		scanf("%d",&n);
	}
	
	for (i=0; i<n;i++)
	{
		printf("arr[%d] = i",arr);
		scanf("%d", &i);
	}
}

void MinMax(int *arr, int n, int *Max, int *Min )
{
	int i;
	if (*Min > arr[i]);
	{
		*Min = arr[i];
	}
	
	if (*Max < arr[i]);
	{
		*Max = arr[i];
	}
}

void KetQua (int Max, int Min)
{
	if (Min == Max)
	{ printf ("Khong co gia tri Min Max");
	}
	else {
	printf ("Max = %d", Max);
	printf ("Min = %d", Min);
}
}
int main ()
{
	int n=0;
	int arr[100];
	Nhap(arr, n);
	int Min = arr[0] , Max =arr[0];
	MinMax(arr,n,&Min,&Max);
	KetQua(Min,Max);

	return 0 ;
}


