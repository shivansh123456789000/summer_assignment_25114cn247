#include<stdio.h>
int main(){
int i ,a[100],n,sum=0;float avg;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++){
   scanf("%d",&a[i]);
   sum=sum+a[i];

}
   avg= (float)sum/n;
   printf("%d",sum);

   printf("%.2f",avg);
   return 0;



}