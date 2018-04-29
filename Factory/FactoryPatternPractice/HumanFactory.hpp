#pragma once

#include "Human.hpp"

class HumanFactory{

public:
    std::unique_ptr<IHuman> create();
};
