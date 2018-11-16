#include <iostream>

class Point {
private:
    float X;
    char Y;
public:
    float getX() {
        return X;
    }

    void setX(float a) {
        X = a;
    }

    char getY() {
        return Y;
    }

    void setY(char a) {
        Y = a;
    }
};
int main () {
    Point p1;
    p1.setX(10.2);
    std::cout<< p1.getX()<<"\n";
    std::cout<< "p1=" << "&p1.getX()"<<"\n";
    Point p2;
    p2.setY(5);
    std::cout<< p2.getY()<<"\n";
    std::cout<< "p2=" << "&p2.getY()"<<"\n";
    return 0;
}
