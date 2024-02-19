
#include "./CalculatorManager.h"

CalculatorManager::CalculatorManager(){

    this->calculator = new Calculator();
    this->history = new CalculatorHistory();
}

int CalculatorManager::useCalculator(std::string equation)
{
           

    return calculator->calculate(equation);

}

Calculator* CalculatorManager::getCalculator()
{
    return this->calculator; 
}

CalculatorHistory* CalculatorManager::getHistory()
{
    return this->history;
}

