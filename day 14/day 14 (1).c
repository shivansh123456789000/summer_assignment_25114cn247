#include<stdio.h>
int main()
{
    int a[5],i,found=0,n,key=45;
    printf("enter the number of elements :\n");
    scanf("%d",&n);
    printf("enter the elements. :\n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==key){
            printf("elements found at the index %d", i);
            found=1;
            break;
        }
    }
        if(found==0){
            printf("enter elements not found");
            return 0;
        }
    
}