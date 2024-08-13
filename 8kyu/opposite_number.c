#include <stdio.h>

float opposite_number(float num) 
{
    return -num;
}
void check_op_num(int a, int b)
{
    printf("%d = %d : ", a , b);
    if (a == b)
        printf("You Passed");
    else
        printf("Try Again!");
    printf("\n");
}

int main(void)
{
    check_op_num(opposite_number(-5), 5);
    check_op_num(opposite_number(-34), 34);
    check_op_num(opposite_number(4), -4);
    return 0;
}