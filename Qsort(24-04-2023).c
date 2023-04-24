/*The program sorts an array of integers in ascending order using the QuickSort algorithm and then takes input from the user in the form of a value k. It then outputs the kth smallest element of the array.*/


#include <stdlib.h>
#include <stdio.h>
int compare(const void *aa,const void *bb)
{
    int n1=*(int*)aa;
    int n2=*(int*)bb;
    return n1-n2; //ascending order
    //return n2-n1; for descending order
}
int main()
{
    int a[]={1,7,4,5,3};
    int k;
    qsort(a,5,sizeof(int),compare);
    for(int i=0;i<5;i++)
    printf("%d\t",a[i]);
    
    printf("\nEnter a K'th value: ");
    scanf("%d",&k);
    printf("\nThe K'th value is : %d",a[k-1]);
    return 0; 
    
}

