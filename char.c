#include <stdio.h>

int main()
{
  char ch;
  int n, i;
  printf("\nenter char");
  scanf("%c", &ch);
  printf("\n enter value of n =");
  scanf("%d",&n);
  for (i = 0; i<ch + n; i++)
  
  {
    printf("%c\t", i);
  }
  return 0;
}