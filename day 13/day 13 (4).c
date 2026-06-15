#include<stdio.h>
int main(){
int i,count=0,n,a[100],even,odd;
printf("enter the number of elements :  \n");
scanf("%d",&n);
printf("enter the elements :\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);

}

even=0;
odd=0;
for(i=0;i<n;i++){
if(a[i]%2==0){
    even++;
}
else{
    odd++;
}
}
printf("even numbers: %d\n",even);
printf("odd numbers: %d\n",odd);
return 0;
}