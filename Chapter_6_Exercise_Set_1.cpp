#include <iostream>
#include <string>
using namespace std;

namespace ghc {
    string principal = "Margaret Chung";
}
namespace hb {
    string principal = "Casey Robinson";
}
namespace wakefield {
    string principal = "Peter Balas";
}
namespace w_l {
    string principal = "Tony Hall";
}
namespace yorktown {
    string principal = "Kevin Clark";
}

int main() {
    cout << ghc::principal << " is the principal of the Grace Hopper Center.\n";
    cout << hb::principal << " is the principal of the H-B Woodlawn Program.\n";
    cout << wakefield::principal << " is the principal of Wakefield High.\n";
    cout << w_l::principal << " is the principal of W-L High.\n";
    cout << yorktown::principal << " is the principal of Yorktown High.\n";
    return 0;
}
