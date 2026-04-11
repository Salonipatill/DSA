 #include <iostream>
#include <format>   // C++23 feature
#include <vector>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;
    double price;

    Car(string b, string m, int y, double p)
        : brand(b), model(m), year(y), price(p) {}
};

int main() {
    vector<Car> cars = {
        {"Toyota", "Fortuner", 2022, 3500000},
        {"Honda", "Civic", 2021, 2200000},
        {"BMW", "X5", 2023, 7200000}
    };

    cout << "Car Inventory:\n";

    for (auto &car : cars) {
        // Using std::format (C++23)
        cout << format("Brand: {}, Model: {}, Year: {}, Price: {}\n",
                       car.brand, car.model, car.year, car.price);
    }

    return 0;
}