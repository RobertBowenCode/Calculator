#ifndef OperationParser_H
#define OperationParser_H

#include "./operation_handlers/Add.cpp"
#include "./operation_handlers/Subtract.cpp"
#include "./operation_handlers/Divide.cpp"
#include "./operation_handlers/Multiply.cpp"
#include "./operation_handlers/Number.cpp"

namespace  OperationParser //I think we need this to be a namespace right? 
{
    int stringToInteger(std::string value);
    Operation* do_something_unique(std::string equation);

    std::vector<std::string> delimEquation(std::string equation, std::string delim);
    

};



#endif