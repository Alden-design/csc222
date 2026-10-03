#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

int gcd(int x, int y){
    int gcd = 1;
    for (int i = 0; i <= x || i <= y; i++){
        if (x % i == 0 && y % i == 0){
            gcd = i;
        }
    }
    return gcd;
}

TEST_CASE("gcd(int n, int m) returns the GCD of n and m") {
    CHECK(gcd(12, 8) == 4);
    CHECK(gcd(48, 18) == 6);
    CHECK(gcd(7, 13) == 1);
    CHECK(gcd(294, 210) == 42);
    CHECK(gcd(19, 19) == 19);
}
