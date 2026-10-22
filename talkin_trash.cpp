#include <iostream>
using namespace std;

int main () {
    int unknown[5];

    for (int i = 0; i < 5; i++)
        cout << "At element " << i << " there is garbage: " << unknown[i] << "\n";
    
    int num = 10;
    int store[2] = {1, 2};
    
    cout << num << "\n";

    for (int i = 0; i < 4; i++)
        store[i] = 100;

    cout << num;
    
    return 0;
}
