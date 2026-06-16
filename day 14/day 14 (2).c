#include<stdio.h>
int main(){
    int i, n, a[5],count=0,key=4;
    printf("enter the niumber of elements :\n");
    scanf("%d",&n);
    printf("enter the elements :\n");
    for (i=0;i<n;i++){
        scanf("%d", &a[i]);

    }
    for(i=0;i<n;i++){
        if(a[i]==key){
            count++;
        }
    }
    printf("number of times this element found %d", count);
    return 0;
}