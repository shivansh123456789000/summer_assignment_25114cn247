#include<stdio.h>
int main(){
    int flag=1,i,length;
    char str[100];
    printf("enter the string : ");
    scanf("%s",str);
    length=strlen(str);
    for(i=0;i<length/2;i++){
        if(str[i]!=str[length-1-i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("the string is a palindrome");
    }
    else{
        printf("the string is not a palindrome");
    }
    return 0;
}