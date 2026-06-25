#include<stdio.h>
int main(){
    char str[100];
    int i ,j,count,max=0;
    char ch;
    printf("enter the string :\n");
    scanf("%s", str);
    for(i=0; str[i]!='\0';i++){
        count = 1;
        for(j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            ch= str[i];

        }
    }
    printf(" common chracter%d", ch);
    printf("frequency%d", max);
    return 0;
}