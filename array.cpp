#include <iostream>
#include "array.h"
using namespace std;

Array::Array(int initialSize, int step) : _size(initialSize), _step(step), _currentIndex(0) {
    _arr = new int[_size];
}

Array::~Array() {
    delete[] _arr;
}

void Array::setValue(int val) {
    if (_currentIndex >= _size) {
        expandArray(_size + _step);
    }
    _arr[_currentIndex++] = val;
}

void Array::setArray(int *pArr, int size) {
    for (int i = 0; i < size; i++) {
        setValue(pArr[i]);
    }
}

void Array::showElements() const {
    for (int i = 0; i < _currentIndex; i++) {
        cout << _arr[i] << " ";
    }
    cout << endl;
}

void Array::expandArray(int newSize) {
    int *temp = new int[newSize];
    for (int i = 0; i < _size; i++) {
        temp[i] = _arr[i];
    }
    delete[] _arr;
    _arr = temp;
    _size = newSize;
}

int Array::getSize() const {
    return _size;
}

int Array::getElemSize() const {
    return _currentIndex;
}