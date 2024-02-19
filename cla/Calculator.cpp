# include "./Calculator.h"


Calculator::Calculator()
{

}

int Calculator::calculate(std::string equation)
{

    Operation* result_operation = OperationParser::parse(equation);  

    return result_operation->compute(); 

}
