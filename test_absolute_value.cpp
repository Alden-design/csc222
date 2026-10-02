#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

double absolute_value(double x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

TEST_CASE("Test absolute_value") {
    CHECK(absolute_value(4) == 4);
    CHECK(absolute_value(-4) == 4);
    CHECK(absolute_value(0) == 0);
}
