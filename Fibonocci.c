#include<stdio.h>
int main()
{
int first=0,second=1,n,i,third;
printf("no.of terms:");
scanf("%d",&n);

  printf("fibinocci series is ");
  
//printing of first and second numbers
  
  printf("%d/n%d,",first,second);
  
//printing of fibin9cci series
  
 for(i=2;i<n;i++){
  third=first +second;
  first=second;
  second=third;
  printf("%d,",third);
  }
  
return 0;
}
/* OUTPUT
  No. of terms: 5
Fibonacci series is: 0 1 1 2 3 */




  //output is
  no.of terms:5
fibinocci series is 0,1,1,2,3
[Process completed - press Enter]
