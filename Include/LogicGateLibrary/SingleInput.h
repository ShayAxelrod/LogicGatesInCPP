#pragma once
#include "Gate.h"

template<typename T>
class SingleInput : public Gate<T>{
public:
    SingleInput(){
        input = std::make_shared<Logic<T>*>();
    }

protected:
    std::shared_ptr<Logic<T>*> input = nullptr;

    void add(Logic<T>* logic){
        if (logic != nullptr){
            *input = logic;
        }
    }
};