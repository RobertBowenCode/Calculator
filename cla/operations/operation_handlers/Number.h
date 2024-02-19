#ifndef Number_H
#define Number_H
#include <iostream>
#include "./operations/Operation.h"

class Number : public Operation{

public : 

    Number(std::string value);
    int calculate(std::string user_input);
    void printOperation();
    int computed_value;
};

#endif