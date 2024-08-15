/*

Function 2 - squaring an argument

Now you have to write a function that takes an argument and returns the square of it.

*/

#include <stdint.h>
#include <stdio.h>

int32_t square(int32_t num){
  return (num*num);
}

int main(void){
    
    int i = 0;

    while (i < 100)
    {
        printf("%d squared = %d\n",i ,square(i));
        i++;
    }
}