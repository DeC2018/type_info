#include <iostream>
#include <typeinfo>

struct Expression {
    virtual ~Expression() {};
};

struct Left : Expression {};
struct Right : Expression {};

bool check_equals(Expression* left, Expression* right) {
    return (typeid(*left) == typeid(*right));
}

int main() {
    Left l; Right r;

    std::cout << check_equals(&l, &r);
    return 0;
}