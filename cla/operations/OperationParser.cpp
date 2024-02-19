#include "./OperationParser.h"


Operation* OperationParser::parse(std::string equation)
{

    std::vector<std::string> delim_equation = std::vector<std::string>(); 

    delim_equation = delimEquation(equation, "+"); 

    if(delim_equation.size() > 1)
    {
        return new Operation(delim_equation); //Add
    }

    delim_equation = delimEquation(equation, "-"); 

    if(delim_equation.size() > 1)
    {
        return new Operation(delim_equation); //Minus
    }


    delim_equation = delimEquation(equation, "*"); 

    if(delim_equation.size() > 1)
    {
        return new Operation(delim_equation); //multiply
    }

    delim_equation = delimEquation(equation, "/"); 

    if(delim_equation.size() > 1)
    {
        return new Operation(delim_equation); //Divide
    }

    //check the case where we're nested in parenthesis, else throw error that this is not valid input

}

std::vector<std::string> OperationParser::delimEquation(std::string equation, std::string delim)
{

    std::vector<std::string> delim_array = std::vector<std::string>(); 
    std::string buffer = ""


    for(int i = 0; i < equation.length(); i++)
    {

        // switch(equation[i]);
        // {

        //     case delim : 
        //         if(buffer.length() > 0)
        //         {

        //         }
        //         else
        //         {
        //             throw new Error("WTF"); 
        //         }

        //         buffer = "";


        // };

    }


}