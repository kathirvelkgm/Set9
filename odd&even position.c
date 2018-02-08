#include <stdio.h>
int main(void) 
{
	char var[50],i,j=0,k=0,t1[20],t2[20];
	gets(var);
	for(i=0;var[i]!='\0';i++)
	if(i%2==0)
	{
	t1[j]=var[i];
	j++;
	}
	else
	{
	t2[k]=var[i];
	k++;
	}
	puts(t1);
	puts(t2);
		return 0;
}
