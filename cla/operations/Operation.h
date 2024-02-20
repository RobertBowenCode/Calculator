#ifndef Operation_H
#define Operation_H
#include <iostream>
#include <vector>

class Operation{
    
    public : 
    Operation();
    Operation(std::vector<std::string> delimited_equation);
    virtual int compute();
    virtual void printOperation();
    int computed_value;
    std::vector<Operation*> operations;

    private :
    

};

#endif