#include<stdio.h>
int main(){
    int n,i,j,sum=8;
    printf("enter the elements in the array :");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("pairs with sum %d", sum);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
            printf("%d , %d", a[i],a[j]);
            }
        }
        
    }
    return 0;
}