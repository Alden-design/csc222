#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

int count_char(string str, char ch){
    return 0;
}

TEST_CASE("count_char(s, ch) counts number of times ch occurs in s") {
    CHECK(count_char("abcd", 'c') == 1);
    CHECK(count_char("abcd", 'x') == 0);
    CHECK(count_char("Excellent!", 'e') == 3);
    CHECK(count_char("Abracadabra", 'a') == 5);
}
