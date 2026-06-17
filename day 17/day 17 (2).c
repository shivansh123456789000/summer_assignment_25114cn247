#include<stdio.h>
int main(){
    int a[100],b[100],n,m,i,c[200],k=0;
    printf("enter the size of array :");
    scanf("%d", &n);
    printf("enter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("enter the size of the second array");
    scanf("%d",&m);
    printf("enter the elements : ");
    for (i=0;i<m;i++){
        scanf("%d", &b[i]);
    }

    for (i=0;i<n;i++){
        c[k]=a[i];
        k++;
        

    }
    for(i=0;i<m;i++){
        c[k]=b[i];
        k++;
    }
    // for(i=0;i<k; i++){
    //     printf("%d", c[i]);
    // }
    for(i=0;i<k;i++){
        int duplicate=0;
        for (int j=0;j<i;j++){
            if(c[i]==c[j]){
                duplicate=1;
                break;
            }
        }
        if(duplicate==0){
            printf("%d", c[i]);
        }
    }
}