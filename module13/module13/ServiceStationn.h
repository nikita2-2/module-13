#pragma once
#include <iostream>

#include <vector>
#include "Truckk.h"
#include "PassengerCarr.h"
template <typename T>
class ServiceStation {       // ????????? ????? ???
public:
    void AddCar(const T& car) {
        if (cars.size() < 5) {
            cars.push_back(car);
            std::cout << "Car add at STO." << std::endl;
        }
        else {
            std::cout << "STO full. Impossible to add car." << std::endl;
        }
    }

    void RepairAll() {
        cars.clear();
        std::cout << "All cars ready and leave." << std::endl;
    }

private:
    std::vector<T> cars;
};
