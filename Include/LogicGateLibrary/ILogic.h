#pragma once
typedef uint8_t u_char;

template<typename T = u_char>
class ILogic {
public:
    virtual T operation() = 0;
    virtual ~ILogic() = default;
};