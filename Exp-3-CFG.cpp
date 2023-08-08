#include<stdio.h>
#include<string.h>
int main()
{
	int i,l,flag=0,n;
	char st[100];
	printf("\nEnter any String: ");
	scanf("%s",&st);
	l=strlen(st);
	for(i=0;i<l;i++)
	{
		if(st[i]!='0'&& st[i]!='1')
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("\nInvalid string");
	}
	else
	{
		printf("\nValid String");
		if(st[0] == '0' && st[l-1] == '1')
			printf("\nString is Accepted for the given condition");
		else
			printf("\nString is Not Accepted for the given condition");
	}
	return 0;
}
