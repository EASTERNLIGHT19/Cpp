#ifndef __CALCOPER_H__
#define __CALCOPER_H__

class Add {
public:
    int a{}, b{};
    void setValue(int x, int y) {
        a = x;
        b = y;
    }
    int calculate() {
        return a + b;
    }
};

class Sub {
public:
    int a{}, b{};
    void setValue(int x, int y) {
        a = x;
        b = y;
    }
    int calculate() {
        return a - b;
    }
};

class Mul {
public:
    int a{}, b{};
    void setValue(int x, int y) {
        a = x;
        b = y;
    }
    int calculate() {
        return a * b;
    }
};

class Div {
public:
    int a{}, b{};
    void setValue(int x, int y) {
        a = x;
        b = y;
    }
    int calculate() {
        if (b != 0) {
            return a / b;
        } else {
            return -1;
        }
    }
};

#endif
