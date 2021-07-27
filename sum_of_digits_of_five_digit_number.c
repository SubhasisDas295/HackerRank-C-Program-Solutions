#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    
    int p,temp,sum=0;
    temp=n;
    while(temp!=0)
    { 
        p=temp%10;
        sum+=p;
        temp=temp/10;
    }
    printf("%d",sum);
    return 0;
}