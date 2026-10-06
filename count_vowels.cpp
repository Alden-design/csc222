#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

int count_vowels(string str){
    return 0;
}

TEST_CASE("count_vowels counts lowercase vowels") {
    CHECK(count_vowels("") == 0);
    CHECK(count_vowels("xyz") == 0);
    CHECK(count_vowels("hello") == 2);
    CHECK(count_vowels("aeiou") == 5);
    CHECK(count_vowels("MISSISSIPPI") == 4);
}
