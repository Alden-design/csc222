#include <iostream>
#include <cstdlib>
using namespace std;

void shuffleMod(int array[], int size) {
    for (int i = 0; i < size; i++) {
        int j = rand() % (i + 1);
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

int* shufflePure(int array[], int size) {
    int* copy = new int[size];
    for (int i = 0; i < size; ++i) {
        copy[i] = array[i];
    }

    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = copy[i];
        copy[i] = copy[j];
        copy[j] = temp;
    }
    return copy;
}

int str_len(char* str) { 
    int length = 0; 
    while (str[length] != '\0') {
        length++; 
    }
    return length; 
}

int main() {
    return 0;
}
