#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

int count_odd_digits(int x){
    int count = 0;
    while (x > 0){
        if ((x % 10) % 2 == 1){
            count++;
        }
        x /= 10;
    }
    return count;
}

TEST_CASE("count_odd_digits(int n) returns number of odd decimal digits in n") {
    CHECK(count_odd_digits(73) == 2);
    CHECK(count_odd_digits(723) == 2);
    CHECK(count_odd_digits(888) == 0);
    CHECK(count_odd_digits(0) == 0);
    CHECK(count_odd_digits(103002) == 2);
    //CHECK(count_odd_digits(0xFF) == 1);
    //CHECK(count_odd_digits(0123) == 2);
    //I think these are wrong checks as 0123 is 83 in decimal which would return
    //1 and 0xFF is 255 which would return 2
}

