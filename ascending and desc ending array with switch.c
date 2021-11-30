#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,tem,choice,n;
    printf("choice 1=ascending array(1 2 3 4 5 .......)\n");
    printf("choice 2=decending array(5 4 3 2 1 .......)\n");
    printf("enter your choice=");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    {
        printf("enter the number of element in array=");
        scanf("%d",&n);
        int a[n],k;
        for(k=0; k<n; k++)
        {
            printf("enter the value of a[%d]=",k);
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
        printf("the ascending number is=");
        for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }

    }
    break ;


    case 2:
    {

        printf("enter the number of element in array=");
        scanf("%d",&n);
        int a[n],y;
        for(y=0; y<n; y++)
        {
            printf("enter the value of a[%d]=",y);
            scanf("%d",&a[y]);
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]<a[j])

                {
                    tem=a[i];
                    a[i]=a[j];
                    a[j]=tem;
                }
            }
        }
        printf("the descending number is=");
        for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }

    }
    break ;
    default :
    {
        printf("not a valid choice");
    }

    }

    getch();
}
