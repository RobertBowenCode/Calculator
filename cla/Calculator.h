#ifndef Calculator_H
#define Calculator_H
#include <iostream>
#include "./operations/OperationParser.h"

class Calculator{

public : 

    Calculator();
    int calculate(std::string user_input);

};

#endif