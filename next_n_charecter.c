//c program to enter the charecter and integer value and print next n charecter
#include <stdio.h>
int main()
{
  char ch;
  int n, i;
  printf("\nenter char");  //single charecter from which you want next n charecter
  scanf("%c", &ch);
  printf("\n enter value of n ="); // enter number upto ch how many charecter you want
  scanf("%d",&n);
  for (i = ch; i<=ch + n; i++)
  
  {
    printf("%c\t", i);
  }
  return 0;
}