#include <iostream>
#include <string>

class Transport
{
protected:
    std::string name;
    int speed;

public:
    Transport(std::string name, int speed) : name(name), speed(speed){}
    void move() const {}
};

class Bus : public Transport
{
protected:
    int passengerCapicity;
    int routeNumber;

public:
    Bus(std::string name, int speed) : Transport(name, speed){}
    void move() const
    {
        std::cout << "Bus is moving" << std::endl;
    }
};
int main()
{

    return 0;
}
