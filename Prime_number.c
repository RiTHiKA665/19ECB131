//to verify the given number is a prime number or not
#include <stdio.h>
int main (){
    int i, n, count=0;
    printf("enter a number = ");
    scanf("%d", &n);
    i = 1;
while(i<=n){
    if(n % i ==0)
    count++;
    i++;
}
if (count == 2){
    printf("The given number is a prime number");

}
else
    printf("The given number is not a prime number");
}
 /*OUTPUT
enter a number = 8
The given number is not a prime number */
