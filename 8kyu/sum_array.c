#include <stddef.h>
#include <stdio.h>
int sum_array(const int *values, size_t count)
{
    size_t  i;
    int sum;
    
    i = 0;
    sum = 0;
    while(i < count)
    {
       sum = sum + values[i];
       i++;
    }
    return (sum);
}

int main(void)
{
    int a[] = {1, 2, 3, 4};
    printf("%d\n", sum_array(a, 4));

}