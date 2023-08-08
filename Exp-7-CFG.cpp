#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,flag=0,sim=0;
	char s[100];
	printf("Enter any string: ");
	scanf("%s",&s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]!='0'&& s[i]!='1')
			flag=1;
	}
	if(flag==1)
		printf("\nInvalid String");
	else
	{
		printf("Valid String");
		for(i=0;i<l;i++)
		{
			if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1')
				sim=1;
		}
		if(sim==1)
			printf("\nString is Accepted for the given conditon");
		else
			printf("\nString is Not Accepted for the given condition");
	}
}
