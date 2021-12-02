#pragma once

#include <string>
#include "caffeinebeverage.h"

using namespace std;

class Coffe : public CaffeineBeverage
{
private:
    string getUserInput();
public:
    Coffe();
    void brew();
    void addCondiments();
    bool customerWantsCondiments();
};