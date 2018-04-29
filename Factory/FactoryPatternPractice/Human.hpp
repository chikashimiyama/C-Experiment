#pragma once

#include "IHuman.hpp"

class Healer : public IHuman{

public:
    void act() const override;
};


class Warrior : public IHuman{
public:
    void act() const override;
};
