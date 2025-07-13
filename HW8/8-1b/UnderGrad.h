#include "Student.h"

class UnderGrad : public Student {
    
private:
    std::string level;

public:
    UnderGrad(int id, int units, std::string name, std::string level);
    
    ~UnderGrad();

    void displayRecord();

    virtual void setId(int id);
    virtual void setUnits(int units);
};