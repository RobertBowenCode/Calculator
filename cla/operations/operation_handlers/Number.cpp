#include "./Number.h"


Number::Number(std::string value)
{
    
    this->computed_value = OperationParser::stringToInteger(value);
}


void Number::printOperation()
{
    std::cout << "Number Object containing " + this->computed_value; 
}