#include "Counter.h"

Counter::Counter() {
    value = 1;
}

Counter::Counter(int init_val) {
    value = init_val;
}

void Counter::increment() {
    value++;
}

void Counter::decrement() {
    value--;
}

int Counter::getValue() {
    return value;
}