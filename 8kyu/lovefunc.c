/*
Opposites Attract

Timmy & Sarah think they are in love, but around where they live, they will only know once they pick a flower each. If one of the flowers has an even number of petals and the other has an odd number of petals it means they are in love.
Write a function that will take the number of petals of each flower and return true if they are in love and false if they aren't.
*/

#include <stdio.h>
#include <stdbool.h>

bool lovefunc(int flower1, int flower2) {
    if ((flower1 + flower2)%2 == 1)
        return (true);
    else
        return (false);
}

void loveword(int word){
    if (word == 1)
        printf("they are in love");
    else 
        printf("they aren't in love");
}

int main(void)
{
    int odd = 1;
    int even = 2;
 
    printf("flower1 = %d, flower2 = %d, result = %d\n", odd, even, lovefunc(odd, even));
    loveword(lovefunc(odd, even));
}