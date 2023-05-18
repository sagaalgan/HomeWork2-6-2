#pragma once
#include <iostream>

class Counter {
private:
    int value;
public:
    Counter();
    Counter(int init_val);
    void increment();
    void decrement();
    int getValue();
};
