/* Write a program that takes multiple test cases as input and for each test case, takes an array of n integers and a key integer, searches for the key integer in the array, and prints the index of the key integer in the array if it is found, or -1 if it is not found. */



#include<stdio.h>
int main()
{
    
    int a[50],n,key,i,tc,m=1;
    printf("\nEnter a number of test case:");
    scanf("%d",&tc);
    while(tc>0)
    {
        printf("\n\n-------test case %d--------",m);
        m++;
        

        printf("\nEnter the number of elements: ");
        scanf("%d",&n);
        printf("\nEnter the array elements");
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        printf("\nEnter key elements: ");
        scanf("%d",&key);
       
        
        for(i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                a[i]=i;
                printf("\nKey found at the index : %d\n",i);
                
            }
            else if(i==n-1)
            {
                printf("\n -1\n ");

            }
            
        }
        tc--;
    }
    return 0;
}
