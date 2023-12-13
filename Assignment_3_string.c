#include<stdio.h>
#include<string.h>
int main()
{
    char a[7]="hello";
    printf("%d\n",strlen(a));
    char b[50];
    int i;
    int result;
    strcpy(b,a);
    for(i=0;i<=strlen(a);i++){
        printf("%c",b[i]);
    }


if(strlen(a)>strlen(b)) 
   printf("a has more length than b");
else if(strlen(a)==strlen(b))
    printf("b and  a have equal length");
else
    printf("b has more length than a");
    
printf( "\n");
//string comparison

    result=strcmp(a,b);

    printf("%d\n",result);
//string reversal
    printf(strrev(b));
    printf( "\n");
//string concatenation
    printf(strcat(a,b));
    printf( "\n");
    return 0;

}
