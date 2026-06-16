#include<stdio.h>
int main(){
    int n ,i,temp;
    printf("enter the number of elelments :\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elemets :\n");
    for (i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    temp=a[0];
    for (i=0;i<n;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
    printf("elements from left rotation :\n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}