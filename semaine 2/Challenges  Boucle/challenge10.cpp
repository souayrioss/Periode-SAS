#include<stdio.h>
int main()
{
  int number, sum=0;

  for(int i=1 ; i<=10; i++)
  {
    printf("Enter number: ");
    scanf("%d",&number);
    if( number<0 )
     continue;
    sum += number;
  }
  printf("Sum = %d",sum);

  return 0;
}

