#pragma once
#include <numeric>
#include "Gate.h"

template<typename T=u_char>
class MultipleInput : public Gate<T>{
public:
    MultipleInput(){
        input = std::make_shared<std::vector<Logic<T>*>>();
    }

protected:
    std::shared_ptr<std::vector<Logic<T>*>> input = nullptr;

    template<typename First>
    void insertInputsToVector(First* input1){
        add(input1);
    }

    template<typename First, typename ... Others>
    void insertInputsToVector(First* input1, Others* ... others){
        add(input1);
        insertInputsToVector(others...);
    }

    void add(Logic<T>* logic){
        if (logic != nullptr){
            input->push_back(logic);
        }
    }
};