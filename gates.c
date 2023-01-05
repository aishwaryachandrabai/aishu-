#include<stdio.h>
int main()
{
    int a,b,c,gate;
    printf("enter the gate");
    scanf("%d", &gate);
    if(gate==1)
    {
        printf("enter the inputs:");
            scanf("%d,%d",&a,&b);
        if(a==0 && b==0)
            {
            c=0;
            printf("c=%d\n",c);
            }
            if(a==0 && b==1)
            {
            c=0;
            printf("c=%d\n",c);
            }
            if(a==1 && b==0)
            {
            c=0;
            printf("c=%d\n",c);
            }
            if(a==1 && b==1)
            {
            c=0;
            printf("c=%d\n",c);
            }
    }
    if(gate==2)
    {
            printf("enter the inputs:");
        scanf("%d,%d",&a,&b);
            if(a==0 && b==0)
        {
            c=0;
            printf("c=%d\n",c);
        }
        if(a==0 && b==1)
        {
            c=1;
            printf("c=%d\n",c);
        }
        if(a==1 && b==0)
        {
            c=1;
            printf("c=%d\n",c);
        }
        if(a==1 && b==1)
        {
            c=1;
            printf("c=%d\n",c);
        }
    }
    if(gate==3)
    {
        printf("enter the inputs:");
        scanf("%d",&a);
        if(a==0)
        {
            c=1;
            printf("c=%d\n",c);
        }
        if(a==1)
        {
            c=0;
            printf("c=%d\n",c);
        }
}
    return 0;
}
