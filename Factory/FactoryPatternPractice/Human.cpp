
#include "Human.hpp"
#include <iostream>

void Healer::act() const{
    std::cout<< "+40 HP" << std::endl;
}

void Warrior::act() const{
    std::cout<< "-40 HP" << std::endl;
}
