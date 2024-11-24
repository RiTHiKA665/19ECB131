// Adding a and b using functions
#include <stdio.h>
int sum(int a, int b);
int main (){
int a, b;
    int sum(int a,int b);
    printf("sum of a and b = %d",sum(a,b));
}
int sum(int a, int b){
    printf("enter a = %d",a);
    scanf("%d", &a);
    printf("enter b = %d",b);
    scanf("%d", &b);
    return a + b;
}
