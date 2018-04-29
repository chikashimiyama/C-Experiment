
#include <iostream>
#include <memory>
#include "HumanFactory.hpp"

int main(int argc, const char * argv[]) {
    
    HumanFactory humanFactory;
    auto&& human =  humanFactory.create();
    
    human->act();
}
