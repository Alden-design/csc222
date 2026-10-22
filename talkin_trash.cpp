#include <iostream>
using namespace std;

struct mem {
    int store[2] = {1, 2};
    int num = 10;
};

int main () {
    int unknown[5];

    for (int i = 0; i < 5; i++)
        cout << "At element " << i << " there is garbage: " << unknown[i] << "\n";
    
    mem info;

    cout << info.num << "\n";
    
    info.store[2] = 100;

    cout << info.num;
    
    return 0;
}
