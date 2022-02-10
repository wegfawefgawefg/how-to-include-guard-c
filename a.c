#include <stdlib.h>
#include "a.h"

struct A *new_a()
{
    struct A *a = malloc(sizeof(struct A));
    a->num = 42;
    return a;
};