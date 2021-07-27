#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x,y,z,m;
    float p,q,r,s;
    scanf("%d %d",&x,&y);
    scanf("%f %f",&p,&q);
    z=x+y,m=x-y;
    r=p+q,s=p-q;
    printf("%d %d",z,m);
    printf("\n%.1f %.1f",r,s);
    return 0;
}