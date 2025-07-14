#pragma once
#include <string>

class Presidents {

private:
    int number;
    std::string name;
    std::string quote;

public:

    Presidents();
    ~Presidents();

    void setNumber(int number);
    void setName(std::string name);
    void setQuote(std::string quote);

    void display();
};