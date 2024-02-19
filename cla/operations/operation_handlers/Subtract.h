#ifndef Subtract_H
#define Subtract_H
#include <iostream>
#include "./operations/Operation.h"

class Subtract : public Operation{

public : 
    Subtract(std::vector<std::string> delimited_subtraction_equation);
    int calculate(std::string user_input);
    void printOperation();
    int computed_value;
};

#endif