int main() {
int m, n, r, GCD;
printf("enter the min value");
scanf("%d",&n);
printf("enter the max value");
scanf("%d", &m);
while(n != 0)
{
r = m % n;
if(r>0){
n=r;
m=n;
} else GCD=n;
}
printf("the GCD of m and n is %d", GCD);
return 0;
}

/* OUTPUT
Enter the min value: 36
Enter the max value: 60
The GCD of the given numbers is: 12 */
