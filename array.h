#ifndef ARRAY_H
#define ARRAY_H

class Array {
public:
    Array(int initialSize = 10, int step = 2);
    ~Array();
    
    void setValue(int val);
    void setArray(int *pArr, int size);
    void showElements() const;
    void expandArray(int size);
    int getSize() const;
    int getElemSize() const;

private:
    int _size;
    int _step;
    int *_arr;
    int _currentIndex;
};

#endif // ARRAY_H