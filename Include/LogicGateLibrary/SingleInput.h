#pragma once
#include "IGate.h"

template<typename T>
class SingleInput : public IGate<T>{
public:
    SingleInput(){
        input = std::make_shared<ILogic<T>*>();
    }

protected:
    std::shared_ptr<ILogic<T>*> input = nullptr;

    void add(ILogic<T>* logic){
        if (logic != nullptr){
            *input = logic;
        }
    }
};