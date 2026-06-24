#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100],temp[100];
    printf("enter the string 1 : ");
    scanf("%s", str1);
    printf("enter the string2 : ");
    scanf("%s", str2);
    if(strlen(str1)!=strlen(str2)){
        printf("no rotation possible");
        return 0;

    }
    strcpy(temp,str1);
    strcat(temp,str1);
    if(strstr(temp,str2)){
        printf("strings are rotations of each other");
    }
    else{
        printf("strings are not rotations of each other");
    }

}