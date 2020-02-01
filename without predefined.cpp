#include<stdio.h>
int  main()
{
	char str[100];
	int n,flag=0,l,ln=0,h,i;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	ln++;
	i=0;
	h=ln-1;
	while(l<=h)
    {
    	if(str[l]!=str[h])
    	{
    		flag=1;
    		break;
		}
		l++;
		h--;
	}
	if (flag==0)
	{
	printf("1");
    }
	else  
	{
		printf("-1");
	}
}
