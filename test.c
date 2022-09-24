#include <stdio.h>
#define CALL test
#include "test.h"

#ifndef __EXCLUDED__
struct test {
    int a;
    char b;
    short *s;
};
#endif//__EXCLUDED__

TEST(test3, {
    /* some tests here */
    puts("This is test 3.");
    return 0;
})

TEST(test4, {
    /* some tests here */
    puts("This is test 4.");
    return 0;
})
