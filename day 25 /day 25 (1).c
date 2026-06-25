#include<stdio.h>
int main(){
    int i,j,n,m,a[100],b[100],c[100],temp;
    printf("enter the size of element");
    scanf("%d",&n);
    printf("enter the elements");
    for (i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("enter the size of elements ");
    scanf("%d", &m);
    printf("enter the elements");
    for(i=0;i<m;i++){
        scanf("%d", &b[i]);
    }
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(i=0;i<m;i++){
        c[n+i]=b[i];
        

    }
    for(i=0;i<n+m-1;i++){
        for(j=i+1;j<n+m;j++){
            if(c[i]>c[j]){
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;

            }
        }
    }
    printf("merged array");
    for(i=0;i<n+m;i++){
        printf("%d", c[i]);
    }
}