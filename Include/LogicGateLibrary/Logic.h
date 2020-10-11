#pragma once
typedef uint8_t u_char;

template<typename T = u_char>
class Logic {
public:
    virtual T operation() = 0;
};