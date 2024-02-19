#ifndef CalculatorManager_H
#define CalculatorManager_H

#include "./Calculator.h"
#include "./CalculatorHistory.h"
#include "./operations/OperationParser.h"
class CalculatorManager{

    public : 
    CalculatorManager();
    Calculator* getCalculator(); 
    CalculatorHistory* getHistory(); 
    
    int useCalculator(std::string equation);


    private :
    Calculator* calculator; 
    CalculatorHistory* history; 
};


#endif