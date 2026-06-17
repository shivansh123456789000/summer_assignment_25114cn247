#include<stdio.h>
int main(){
    int i,j,n ;
    printf("number of elements : ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements :\n");
    for (i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        int duplicate =0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                duplicate =1;
                break;
            }
        }
        if(duplicate==0){
            printf("%d",a[i]);
        }
    }
}

