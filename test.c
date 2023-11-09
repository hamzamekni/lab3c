/**
 * Test code for the simple counter.
 * https://cylab.be/blog/271/unit-testing-c-code
 */
#include "counter.h"
#include <assert.h>

int main(int argc, char **argv)
{
    struct Counter* c = counter();
    assert(c);

    assert(value(c) == 0);

    increment(c);
    assert(value(c) == 1);
    return 0;
}
