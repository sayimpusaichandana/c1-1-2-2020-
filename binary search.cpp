//binary search
#include<stdio.h>
int main()
{
	int n,i,key,a[100],flag=0,low,high,mid;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			printf("%d is found at %d place",key,mid+1);
			flag=1;
			break;
		}
		else if(key>a[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	if(flag==0)
	printf("%d is not found",key);
	return 0;
}
