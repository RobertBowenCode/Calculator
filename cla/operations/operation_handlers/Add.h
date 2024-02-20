#ifndef Add_H
#define Add_H
#include <iostream>
#include "../Operation.h"

class Add : public Operation{

public : 

    Add(std::vector<std::string> delimited_Add_equation);
    int calculate(std::string user_input);
    void printOperation();
    int computed_value;
};

#endif