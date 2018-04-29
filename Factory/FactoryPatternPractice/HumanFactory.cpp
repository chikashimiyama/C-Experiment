#include <memory>
#include "HumanFactory.hpp"

std::unique_ptr<IHuman> HumanFactory::create(){
    return std::unique_ptr<IHuman>(new Warrior());
    // here I can use any class under human interface

};
