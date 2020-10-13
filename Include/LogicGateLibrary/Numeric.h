#pragma once
#include "ILogic.h"

template<typename T = u_char>
class Numeric : public ILogic<T> {
public:
    Numeric(const T number) : m_number(number) {};

    T operation(){
        return m_number;
    }

private:
    T m_number = 0;
};
