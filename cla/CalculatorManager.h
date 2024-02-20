#ifndef CalculatorManager_H
#define CalculatorManager_H

#include "./Calculator.cpp"
#include "./CalculatorHistory.cpp"

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