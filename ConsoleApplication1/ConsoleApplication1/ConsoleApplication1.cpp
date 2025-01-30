#include <iostream>
#include <string>

using namespace std;

struct Car {
    string brand;
    int mileage;
    string engine;
};

int main()
{
    Car cars[5] = {
        {"Toyota", 15000, "Automatic"},
        {"Honda", 30000, "Mechanic"},
        {"Ford", 25000, "Automatic"},
        {"Toyota", 15000, "Mechanic"},
        {"BMW", 18000, "Automatic"}
    };

    string inputBrand = "Toyota";
    int inputMileage = 20000;
    string inputEngineType = "Automatic";

    for (int i = 0; i < 5; i++) {
        if ((cars[i].brand == inputBrand || inputBrand.empty()) &&
            (cars[i].mileage <= inputMileage || inputMileage == 0) &&
            (cars[i].engine == inputEngineType || inputEngineType.empty())) {
            cout << "Brand: " << cars[i].brand << ", Mileage: " << cars[i].mileage
                << ", Engine: " << cars[i].engine << endl;
        }
    }
}

