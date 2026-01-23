#include <iostream>

class Engine {
private:
    int power;
public:
    Engine(int p) : power(p) {}

    virtual void start() = 0;
    virtual ~Engine() {
        std::cout << "Engine is deleted" << std::endl;
    };
};

class Car : virtual public Engine {
public:
    Car (int p) : Engine (p) {}

    void start() override {
        std::cout << "Car started and start drive..." << std::endl;
    }
};

class Boat : virtual public Engine {
public:
    Boat (int p) : Engine (p) {}

    void start() override {
        std::cout << "Boat started and start swim..." << std::endl;
    }
};

class AmphibiousVehicle : public Boat, public Car {
public:
    AmphibiousVehicle(int p) : Engine(p), Boat(p), Car(p) {}

    void start() override {
        std::cout << "AmphibiousVehicle started and start swim or drive..." << std::endl;
    }
};

int main() {
    std::cout << "\n";
    Car my_car(15);
    AmphibiousVehicle my_vehicle(5);
    Boat my_boat(10);

    my_car.start();
    my_vehicle.start();
    my_boat.start();
    std::cout << "\n";
    return 0;
}