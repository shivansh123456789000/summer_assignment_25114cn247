#include<stdio.h>
int main (){
    int n ,i, temp;
    printf("enter the number of elements : \n");
    scanf("%d", &n);
    int a[n];

    printf("enter the elements :\n");
    for (i=0;i<n;i++){
        scanf("%d", &a[i]);

    }
    int end = n-1;
    int start=0;
    while(start<end){
        temp= a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;

    }
    printf("reverse array is :\n");
    for(i=0;i<n;i++){
        printf("%d", a[i]);
    }
}