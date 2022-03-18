#include<stdio.h>

void Nhap(int *arr, int n)
{
	while ((n)<=0)
	{
		printf ("Hay nhap n > 0");
		scanf ("%d", &n);	
	}
	int i;
	for (i=0;i<n; i++)
	{
		printf (" arr[%d]= i",arr);
		scanf ("%d", &i);
	}
	
		
}

void MinMax(int *arr, int n, int *Min, int *Max )
{	int i;
	
			if((*Min)>arr[i])
		{
			(*Min)=arr[i];
		}
		
		if((*Max)<arr[i])
		{
			(*Max)=arr[i];
		}
		
	
}

void KetQua(int Min, int Max )
{
	if (Min==Max)
	{
		printf("Khong co Min Max");
	}
	
	else {
	
	printf (" Max = %d", Max);
	printf (" Min = %d", Min);
		}
}

int main ()
{	int n=0;
	int arr[100];
	
	Nhap(arr, n);
	int Max = arr[0], Min = arr[0];
	
	MinMax(arr, n, &Min, &Max);
	KetQua(Min, Max);
	
}
