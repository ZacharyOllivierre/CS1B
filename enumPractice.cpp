#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

enum class TrafficLight {Red, Green, Yellow};

void printLight(TrafficLight light) {
    switch(light) {
        case TrafficLight::Red:
            cout << "Light is Red\n";
            break;
        case TrafficLight::Green:
            cout << "Light is Green\n";
            break;
        case TrafficLight::Yellow:
            cout << "Light is Yellow\n";
            break;
    }
}

TrafficLight nextLight(TrafficLight light) {
    switch(light) {
        case TrafficLight::Red:
            return TrafficLight::Green;

        case TrafficLight::Green:
            return TrafficLight::Yellow;

        case TrafficLight::Yellow:
            return TrafficLight::Red;
        default:
            return TrafficLight::Green;
    }
}

int main() {
    TrafficLight light = TrafficLight::Green;
    while (true) {
        printLight(light);
        light = nextLight(light);
        this_thread::sleep_for(chrono::seconds(2));
    }
}