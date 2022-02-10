#include <stdio.h>

#include "a.h"
#include "b.h"

int main(int argc, char *argv[])
{
    struct A *a = new_a();
    struct B *b = new_b();

    printf("a->num: %d\n", a->num);
    printf("b->num: %d\n", b->num);

    return 0;
}