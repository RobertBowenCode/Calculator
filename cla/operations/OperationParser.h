#ifndef OperationParser_H
#define OperationParser_H
#include "./Operation.h"

class OperationParser
{
    public :
    static Operation* parse(std::string input);



    private: 
    static std::vector<std::string> delimEquation(std::string equation, std::string delim);
    

};
#endif