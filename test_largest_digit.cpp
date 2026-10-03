#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

int largest_digit(int x){
    int largest = 0;
    x = std::abs(x);

    while (x > 0){
        if (x % 10 > largest){
            largest = x % 10;
        }
        x /= 10;
    }
    return largest;
}

TEST_CASE("largest_digit(int n) returns the largest digit in n") {
    CHECK(largest_digit(0) == 0);
    CHECK(largest_digit(1030) == 3);
    CHECK(largest_digit(7986) == 9);
    CHECK(largest_digit(-584) == 8);
    CHECK(largest_digit(0xFF) == 5);
    CHECK(largest_digit(0123) == 8);
}
