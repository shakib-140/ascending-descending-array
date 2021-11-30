
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,tem;
    printf("enter the number of element in array=");
    scanf("%d",&n);

    int a[n],k;

         for(k=0; k<n; k++)
    {
        printf("enter the value of a[%d]=\n",k);
        scanf("%d",&a[k]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])

            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
printf("the ascending number is=\n");
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
    getch();
}
