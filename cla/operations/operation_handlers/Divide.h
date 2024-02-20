#ifndef Divide_H
#define Divide_H
#include <iostream>
#include "../Operation.h"

class Divide : public Operation{

public : 
    Divide(std::vector<std::string> delimited_Divide_equation);
    int calculate(std::string user_input);
    void printOperation();
    int computed_value;
};

#endif