// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
private:
    T arr[size];
    int top;
public:
    TStack() : top(-1) {}
    void push(const T& value) {
        if (top < size - 1)
            arr[++top] = value;
    }
    T pop() {
        if (top >= 0)
            return arr[top--];
        return T(); 
    }
    T peek() const {
        if (top >= 0)
            return arr[top];
        return T();
    }
    bool isEmpty() const {
        return top == -1;
    }
};

#endif
