#include <iostream>

using namespace std;

class Box
{
    public:
        double length;
        double breadth;
        double heigth;
}

int main(){
    Box Box1; //声明Box1，
    Box Box2;  //声明Box2
    double volume = 0.0;  

    //box1讲述 discribe
    Box1.heigth = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    //box2讲述 
    Box2.heigth = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;

    //box1 的体积
    volume = Box1.heigth * Box1.length * Box1.breadth;
    cout << "Box1的体积," << volume << endl;

    //box2 的体积
    volume = Box2.heigth * Box2.length * Box2.breadth;
    cout << "Box2的体积，" << volume << endl;
    return 0;

};

