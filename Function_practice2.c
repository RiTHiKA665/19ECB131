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
/* OUTPUT
Enter the value of a: 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50 */
