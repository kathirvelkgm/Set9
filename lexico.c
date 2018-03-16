#include <stdio.h>
int main(void)
{
   char a[50];
   int i,j,t;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
     for(j=i+1;a[j]!='\0';j++)
       if(a[i]>a[j])
         {
         	t=a[i];
         	a[i]=a[j];
         	a[j]=t;
         }
         printf("%s",a);
	return 0;
}
