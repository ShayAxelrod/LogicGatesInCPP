#pragma once
#include "SingleInput.h"

template<typename T=u_char>
class Not : public SingleInput<T> {
public:
    Not(Logic<T>* input) : SingleInput<T>() {
        this->add(input);
    }

    T operation() {
        return ~((*this->input)->operation());
    }
};