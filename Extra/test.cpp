#include <iostream>
using namespace std;

class Rectangle {
    
private:
    int xLength;
    int yLength;

public:
    Square(int xLength, int yLength) {this->xLength = xLength; this->yLength = yLength};

    int getX() {return xLength};
    int getY() {return yLength};

    void setX(int x) {xLength = x};
    void setY(int y) {yLength = y};
};

class Square : public Rectangle {
    
}

int main() {

    return 0;
}