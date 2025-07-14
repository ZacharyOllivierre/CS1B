#pragma once
#include <string>

class Cat {

private:
    std::string name;
    int weight;
    std::string color;

public:
    void setWeight(int weight);
    void setColor(std::string color);
    void setName(std::string name);
    
    void displayInfo();
    void meow();
};