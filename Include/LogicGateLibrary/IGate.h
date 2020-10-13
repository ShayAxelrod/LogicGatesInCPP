#pragma once
#include <vector>
#include <memory>
#include "ILogic.h"

template<typename T = u_char>
class IGate : public ILogic<T> {
public:
    virtual void add(ILogic<T>* logic) = 0;
    virtual ~IGate() = default;
};
