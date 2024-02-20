#ifndef Calculator_H
#define Calculator_H
#include <iostream>
#include "./operations/OperationParser.cpp"

class Calculator{

public : 

    Calculator();
    int calculate(std::string user_input);

};

#endif