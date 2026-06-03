#include<stdio.h>
int main () {
    int  n , binary[32] , i = 0, j,count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;

}
    for( j = 0; j < i; j++) {
        if(binary[j] == 1) {
            count++;
        }
    }
    printf("%d", count);
}