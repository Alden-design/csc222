#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

string shout(string str){
    for (int i = 0; i < str.length(); i++){
        if (str[i] == '.'){
            str[i] = '!';
        }
        else if (str[i] >= 97 && str[i] <= 122){
            str[i] -= 32;
        }
    }
    return str;
}

TEST_CASE("shout turns an exclaimation into a demand") {
    CHECK(shout("Don't touch that.") == "DON'T TOUCH THAT!");
    CHECK(shout("Let's go.") == "LET'S GO!");
    CHECK(shout("Leave it there!") == "LEAVE IT THERE!");
}
