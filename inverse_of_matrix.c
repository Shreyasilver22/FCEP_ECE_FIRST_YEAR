#include<stdio.h>
int main()
{
int a[3][3],b[3][3],c[3][3],I[3][3],i,j,k;
float determinant;
for(i=0;i<3;i++)
{

    for(j=0;j<3;j++)
    {
        a[i][j]=(i+2)+(j-5);
        b[i][j]=(i+1)+ (j+1);
       

    }

}
determinant= a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
printf("determinant of matrix a");
printf("\n");
printf("%f",determinant);
printf("\n");
printf("inverse of matix c");
printf("\n");
for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
       I[i][j]=(a[(j+1)%3][(i+1)%3]*a[(j+2)%3][(i+2)%3]-a[(j+1)%3][(i+2)%3]*a[(j+2)%3][(i+1)%3])/determinant;
       printf("%f ",I[i][j]);
    }

    printf("\n");
}

return 0;
}