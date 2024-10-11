#include <iostream>
#include <vector>
#include "Truckk.h"
#include "PassengerCarr.h"
#include "ServiceStationn.h"

int main() {
    // СТО для легковых автомобилей
    ServiceStation<PassengerCar> passengerStation;
    // Добавление 6 легковых автомобилей
    for (int i = 0; i < 6; ++i) {
        passengerStation.AddCar(PassengerCar());
    }
    
    
    // СТО для грузовых автомобилей
    ServiceStation<Truck> truckStation;
    // Добавление 6 грузовых автомобилей
    for (int i = 0; i < 6; ++i) {
        truckStation.AddCar(Truck());
    }


    // Ремонт всех машин на СТО для легковых автомобилей
    passengerStation.RepairAll();
    // Ремонт всех машин на СТО для грузовых автомобилей
    truckStation.RepairAll();
    system("pause");
    return 0;
}
