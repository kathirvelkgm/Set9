#include <stdio.h>
int clan( );
int main(void) 
{
printf("%d\n",clan());
printf("%d\n",clan());
printf("%d\n",clan());
return 0;
}
int clan()
{
	int x,y;
	scanf("%d%d",&x,&y);// ninja mem is greater than opponent it return 0 as output
	if(x<y)
	return(y-x);
	}
