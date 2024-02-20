#include "./OperationParser.h"

namespace OperationParser {

void foo() { std::cout << "foo!"; }

extern Operation* parse(std::string equation){
        std::vector<std::string> delim_equation = std::vector<std::string>(); 

        delim_equation = delimEquation(equation, "+"); 

        if(delim_equation.size() > 1)
        {
           return (Operation*)(new Add(delim_equation)); //Add
        }

        delim_equation = delimEquation(equation, "-"); 

        if(delim_equation.size() > 1)
        {
            return (Operation*)(new Subtract(delim_equation)); //Minus
        }


        delim_equation = delimEquation(equation, "*"); 

        if(delim_equation.size() > 1)
        {
            return (Operation*) (new Multiply(delim_equation)); //multiply
        }

        delim_equation = delimEquation(equation, "/"); 

        if(delim_equation.size() > 1)
        {
            return (Operation*)(new Divide(delim_equation)); //Divide
        }

        return (Operation*)(new Number(equation));

    }

}




int OperationParser::stringToInteger(std::string value)
{
    //need to write try catch and make sure that this is safe, and handle error checking in the future

    
    return std::stoi(value);
}



std::vector<std::string> OperationParser::delimEquation(std::string equation, std::string delim)
{

    std::vector<std::string> delim_array = std::vector<std::string>(); 
    std::string buffer = "";


    return std::vector<std::string>();
}