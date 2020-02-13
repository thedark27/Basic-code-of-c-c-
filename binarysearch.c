#include <stdio.h>
#include <conio.h>
int main()
{
	int arry[100],n,start,mid,end,search,i;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	printf("Enter the number in an array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arry[i]);
	}
	start=0;
	end=n-1;
	mid=(start+end)/2;
	printf("Enter the number to be searched\n");
	scanf("%d",&search);
	while(start<=end)
	{
		if(search<arry[mid])
		{
			end=mid-1;
		}
		else if(search==arry[mid])
		{
			printf("Location is found\nLocation is=%d",mid+1);
			break;
		}
		else
		{
			start=mid+1;
			mid=(start+end)/2;
		}
	}
	getch ();
	return 0;
}
