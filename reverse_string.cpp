#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

string reverse_string(string str){
    int max = str.length() - 1;
    for (int i = 0; i < str.length() / 2; i++){
        char store = str[i];
        str[i] = str[max];
        str[max] = store;
        max--;
    }
    return str;
}

TEST_CASE("reverse_string(s) returns s backwards") {
    CHECK(reverse_string("happy") == "yppah");
    CHECK(reverse_string("GHC!") == "!CHG");
    CHECK(reverse_string("The end.") == ".dne ehT");
}

