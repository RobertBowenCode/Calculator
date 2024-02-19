#ifndef Operation_H
#define Operation_H
#include <iostream>
#include <vector>
class Operation{
    
    public : 
    Operation(std::vector<std::string> delimited_equation);
    virtual int compute();
    virtual void printOperation();
    int computed_value;
    Operation* operations[];

    private :
    

};






/**
okay so what should go in the calculatorApp? 
*/

#endif