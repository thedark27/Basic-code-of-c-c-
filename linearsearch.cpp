#include <stdio.h>
#include <conio.h>
int main()
{
	int arry[100],n,i,k=0,x;
	printf("Enter the size of an aaray\n");
	scanf("%d",&n);
	printf("Enetr the number in that array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arry[i]);
	}
	printf("Enter the number to be searched\n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
			if(arry[i]==x)
			{
				k=1;
				printf("%d is found and it's Location is %d",x,i+1);
				break;
		}
	}
	if(k==0)
	{
		printf("%d is not in list\n",x);
	}
	getch ();
	return 0;
}
