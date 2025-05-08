#ifndef H_STACK
#define H_STACK

#include <cstdint>
#include <optional>
#include <stack>

class Stack {
  private:
    std::stack<uint16_t> *stack;

  public:
    Stack() { this->stack = new std::stack<uint16_t>(); }

    ~Stack() {
        if (this->stack != nullptr) {
            delete this->stack;
            this->stack = nullptr;
        }
    }

    void push(const uint16_t &val) { this->stack->push(std::move(val)); }
    std::optional<uint16_t> pop() {
        if (this->stack->empty()) {
            return {};
        }
        uint16_t ret = this->stack->top();
        this->stack->pop();
        return ret;
    }
};

#endif // H_STACK
