#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

string mock(string str){
    bool lastMocked = false;

    for (int i = 0; i < str.length(); i++){
        if (str[i] >= 97 && str[i] <= 122){
            if (!lastMocked) {
                str[i] -= 32;
                lastMocked = true;
            } else{
                lastMocked = false;
            }
        } else if (str[i] >= 65 && str[i] <= 90){
            str[i] += 32;
            lastMocked = false;
        }
    }
    return str;
}

TEST_CASE("mock turns a string into a SpongeBob meme") {
    CHECK(mock("We are learning C++.") == "wE aRe lEaRnInG c++.");
    CHECK(
        mock("I'm not sure how to do this.") ==
        "i'M nOt SuRe hOw To Do ThIs."
    );
    CHECK(mock("Mississippi") == "mIsSiSsIpPi");
}
