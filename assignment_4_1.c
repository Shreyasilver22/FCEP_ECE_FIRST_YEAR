#include<stdio.h>
int main()
{
    FILE *fpointer;
    fpointer=fopen("file.txt","a");
    fprintf(fpointer,"I am Shreyas Singh.I am a student of delhi university");
    fclose(fpointer)
    ;
    printf("file is created");
    return 0;



}