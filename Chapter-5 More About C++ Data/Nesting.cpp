#include <iostream>
using namespace std;

class Car {
   private:
    int fuel;
    int speed;
   public:
    void setFuel(int f) {
        fuel = f;
    }
    void setSpeed(int s) {
        speed = s;
    }
    void drive() {
        startEngine();
        accelerate();
        shiftGears();
        cout << "Driving..." << endl;
    }
   private:
    void startEngine() {
        cout << "Starting engine..." << endl;
    }
    void accelerate() {
        cout << "Accelerating..." << endl;
    }
    void shiftGears() {
        cout << "Shifting gears..." << endl;
    }
};

int main() {
    Car myCar;
    myCar.setFuel(100);
    myCar.setSpeed(60);
    myCar.drive();
    return 0;
}
