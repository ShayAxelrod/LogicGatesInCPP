#pragma once
#include "MultipleInput.h"

template<typename T=u_char>
class Or : public MultipleInput<T>{
public:
    template<typename First, typename ... Others>
    Or(First* input1, Others* ... others) : MultipleInput<T>(){
        this->insertInputsToVector< First, Others...>(input1, others...);
    }

    T operation(){
        T result = std::accumulate(this->input->begin(), this->input->end(), resultOfFirstElement(), [] (T l1, Logic<T>* l2){
            return l1 | l2.operation();
        });
        return result;
    }

    T resultOfFirstElement(){
        return this->input->front()->operation();
    }
};