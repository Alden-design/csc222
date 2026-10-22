#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 1;
    int y = 2;

    swapByValue(x, y);
    cout << x << y;
    swapByPointer(&x, &y);
    cout << x << y;
    swapByReference(x, y);
    cout << x << y;

    return 0;
}
