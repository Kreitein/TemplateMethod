#pragma once

#include <iostream>

using namespace std;

class CaffeineBeverage {
public:
    CaffeineBeverage();
    virtual void prepareRecipe() final;
    void boilWater();
    virtual void brew() = 0;
    void pourInCup();
    virtual void addCondiments() = 0;
    virtual bool customerWantsCondiments();

};