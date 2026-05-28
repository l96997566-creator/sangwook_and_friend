#include "add.h"
#include "sub.h"
#include "mul.h"
#include <iostream>

int main()
{
    int a = add(10, 2);
    int b = sub(10, 2);
    int c = mul(10, 2);

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}