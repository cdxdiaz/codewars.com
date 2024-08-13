// In this kata you will create a function that takes in a list and returns a list with the reverse order.

#include <stdlib.h>
#include <stdio.h>

int *reverse_list(const int *array, size_t length) {

    int *temp;
    size_t i;

    i = 0;
    temp = malloc(sizeof(int) * length);

    if (!array || !length )
        return NULL;

    while (i < length)
    {
        temp[i] = array[length - i - 1];
        i++;
    }
    return(temp);
}

int main(void)
{
    int Array[] = {2, 4, 6, 8,};
    int i = 0;
    int *a;

    a = reverse_list(Array, 4);
    while (i < 4)
    {
        printf("MY original array[%d] = %d", i ,Array[i]);
        printf("  /// ");
        printf("MY reverse array[%d] = %d", i, a[i]);
         printf("\n");
        i++;
    }
    
}