//Multiplication by functions
#include <stdio.h>
void table(int a);

int main (){
    int a;
    printf("enter the value a - %d", a);
    scanf("%d", &a);
    table(a);
    //return 0;
}
void table(int a){
    for (int i=1; i<=10; i++){
        printf("%d * %d = %d\n", a, i, a*i);
    }
}
