#include<stdio.h>
#include<string.h>
int main(){
  int i, j,len1,len2;
  char str1[100],str2[100];
  printf("enter the string :");
  scanf("%s", str1);
  len1= strlen(str1);
  printf("enter the string 2: ");
  scanf("%s", str2);
  len2=strlen(str2);
  if(len1!=len2){
    printf("not anagram");

  }
  for(i=0;str1[i]!='\0';i++){
    int found= 0;
    for(j=0; str2[j]!='\0';j++){
        if(str1[i]==str2[j]){
            str2[j]='*';
            found=1;
            break;

        }
    }
    if(found==0){
        printf("not anagram");
        return 0;
    }
  }
  printf("anagram");
  return 0;
}