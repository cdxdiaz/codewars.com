#include <stddef.h>
#include <stdio.h>

int positive_sum(const int *values, size_t count)
{
  size_t i;
  int sum;
  
  i = 0;
  sum = 0;
  while (i < count)
  {
      if (values[i] > 0)
      {
        sum = sum + values[i];
      }
      i++;
  }
  return (sum);
}

int main(void)
{
    int a[] = {-1, -2, 3, 4, 5};
    int b = 5;
    printf("%d\n",positive_sum(a, b));
}