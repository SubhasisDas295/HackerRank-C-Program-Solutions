#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{ 
   char ch,s[20],sen[30];
   scanf("%c",&ch);
   scanf("%s",s);
   scanf("\n");
   scanf("%[^\n]%*c",sen);
   printf("%c\n",ch);
   printf("%s\n",s);
   printf("%s",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}