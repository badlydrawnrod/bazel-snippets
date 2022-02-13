#pragma once

#include <string>

class Cat
{
public:
    explicit Cat(const std::string& name) : name_{name}
    {
    }

    std::string Name() const;

private:
    std::string name_;
};