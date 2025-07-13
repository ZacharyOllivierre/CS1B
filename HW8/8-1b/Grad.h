#include "Student.h"

class Grad : public Student {
    
private:
    std::string degree;

public:
    Grad(int id, int units, std::string name, std::string degree);
    
    ~Grad();

    void displayRecord();

    virtual void setId(int id);
    virtual void setUnits(int units);
};