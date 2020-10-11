#pragma once
#include <vector>
#include <memory>
#include "Logic.h"

template<typename T = u_char>
class Gate : public Logic<T> {
public:
    virtual void add(Logic<T>* logic) = 0;
};
