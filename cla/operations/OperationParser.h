#ifndef OperationParser_H
#define OperationParser_H

#include "./operation_handlers/Add.cpp"
#include "./operation_handlers/Subtract.cpp"
#include "./operation_handlers/Divide.cpp"
#include "./operation_handlers/Multiply.cpp"
#include "./operation_handlers/Number.cpp"

class OperationParser
{
    public :
    static Operation* parse(std::string input);
    static int stringToInteger(std::string value);

    private: 
    static std::vector<std::string> delimEquation(std::string equation, std::string delim);
    

};
#endif