//linear search
#include<stdio.h>
int main()
{
	int n,i,key,a[100],flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&key);
    for(i=0;i<n;i++)
    {
    	if(key==a[i])
    	{
    		printf("found at %d position",i+1);
    		flag=1;
		}
	}
	if(flag==0)
	printf("not found");
	return 0;
}
