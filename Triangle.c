#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c); 
if (a+b <= c || b+c <= a || a+c <= b)
{
  printf("Triangle is not possible");
}
else 
{
  if( a==b && b==c && a==c)
  {
    printf("Equilateral Triangle");
  }
  else if ( a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
  {
    printf("Right-angle Triangle");
  }
  else if ( a == b || b == c || a == c)
  {
    printf("Isosceles Triangle");
  }
  else 
  {
    printf("Scalene Triangle");
  }
}
}
