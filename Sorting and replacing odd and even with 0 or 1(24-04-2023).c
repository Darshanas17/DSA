#include<stdio.h>
int main(){
    int a[100],count=0,temp,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
                /* 
                a[i]=temp;
                a[i]=a[j];
                a[j]=temp;
                */
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        a[i]=(a[i]%2==0)? 1:0;
    }
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
