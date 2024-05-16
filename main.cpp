#include <iostream>
#include "array.h"
using namespace std;

void test5() {
    Array arr(3, 2);

    arr.setValue(3);
    arr.setValue(0);
    arr.setValue();
    arr.setValue();
    arr.setValue();

    cout << "Test 5 result: " << arr.getElemSize() << endl;
    arr.showElements();
}

int main() {
    Array arr;

    arr.setValue(6);
    arr.setValue(60);
    arr.setValue(40);

    arr.showElements();

    test5();

    return 0;
}