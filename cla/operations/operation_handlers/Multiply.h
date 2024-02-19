#ifndef Multiply_H
#define Multiply_H
#include <iostream>
#include "./operations/Operation.h"

class Multiply : public Operation{

public : 

    Multiply(std::vector<std::string> delimited__multiply_equation);
    int calculate(std::string user_input);
    void printOperation();
    int computed_value;
};

#endif