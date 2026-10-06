#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

int count_char(string str, char ch){
    int count = 0;
    for (int i = 0; i < str.length(); i++){
        if (str[i] == ch || str[i] == ch - 32){
            count++;
        }
    }
    return count;
}

TEST_CASE("count_char(s, ch) counts number of times ch occurs in s") {
    CHECK(count_char("abcd", 'c') == 1);
    CHECK(count_char("abcd", 'x') == 0);
    CHECK(count_char("Excellent!", 'e') == 3);
    CHECK(count_char("Abracadabra", 'a') == 5);
}
