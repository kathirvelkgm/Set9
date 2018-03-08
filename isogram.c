#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[50];
	int i,l,count=0,j;
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	   for(j=i+1;j<l;j++)
	      if(s[i]==s[j])
	      count++;
	  if(count==0)
	   printf("Yes");
	  else
	   printf("No");
            return 0;
	
}
