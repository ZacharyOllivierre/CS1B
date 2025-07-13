#pragma once
#include <string>

class Student {

protected:
    int id;
    std::string name;
    int units;

public:
    Student();
    Student(int id, int units, std::string name);

    virtual ~Student();

    virtual void setId(int id) = 0;
    virtual void setUnits(int units) = 0;
    
    int getId() const;
    int getUnits() const;
};