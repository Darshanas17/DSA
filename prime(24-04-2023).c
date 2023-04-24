#include <stdio.h>
void main()
{
    int a[10],c=0;
    printf("Enter a elements");
    for(int i=0; i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
        c=0;
        for( int j=2;j<=a[i]/2;j++)
        {
            if(a[i]%j==0){
                c=1;
            }
        }
        if(c==0){
                printf("%d\n",a[i]);
        }
    }

}
