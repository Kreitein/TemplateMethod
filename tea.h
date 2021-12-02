#pragma once

#include <string>
#include "caffeinebeverage.h"

using namespace std;

class Tea : public CaffeineBeverage
{
private:
    string getUserInput();
public:
    Tea();
    void brew();
    void addCondiments();
    bool customerWantsCondiments();

};