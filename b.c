#include <stdlib.h>
#include "b.h"

struct B *new_b()
{
    struct B *b = malloc(sizeof(struct B));
    b->num = 42;
    return b;
};