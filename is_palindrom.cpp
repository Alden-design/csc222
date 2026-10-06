#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

bool is_palindrome(string str){
    int max = str.length() - 1;
    for (int i = 0; i < str.length() / 2; i++){
        if (str[i] != str[max]){
            return false;
        }
        max--;
    }
    return true;
}

TEST_CASE("is_palindrome detects palindromes") {
    CHECK(is_palindrome("") == true);
    CHECK(is_palindrome("a") == true);
    CHECK(is_palindrome("aba") == true);
    CHECK(is_palindrome("abba") == true);
    CHECK(is_palindrome("abc") == false);
}

