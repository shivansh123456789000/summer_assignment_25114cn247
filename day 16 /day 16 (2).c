#include<stdio.h>
int main(){
    int n , i ,j;
    printf("enter the number of elements in the array :");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements in the array :");
    for (i=0;i<n;i++){
        scanf("%d", &a[i]);

    }
    int max= 0,element;
    for(i=0;i<n;i++){
        int count=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            element=a[i];
        }
    }
    printf("the most repeated element is %d and it is repeated %d times",element,max);
    return 0;
}