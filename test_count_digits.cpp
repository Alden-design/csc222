#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

int count_digits(int x){
    int count = 0;
    if (x == 0){
        return 1;
    }
    while (x > 0){
        x /= 10;
        count++;
    }
    return count;
}

TEST_CASE("count_digits(int n) returns number of decimal digits in n") {
    CHECK(count_digits(7) == 1);
    CHECK(count_digits(73) == 2);
    CHECK(count_digits(999) == 3);
    CHECK(count_digits(0) == 1);
    CHECK(count_digits(100000) == 6);
    CHECK(count_digits(0xFF) == 3);
    CHECK(count_digits(0123) == 2);
}
