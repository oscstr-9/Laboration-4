#include "MotorVehicle.h"

#include <IOstream>

using namespace std;

int main() {
	string name, address, color, model;
	int numberOfCylinders, numberOfTires, amountOfCars;
	float height, width, sizeInLiters;
	bool allowedToDrive;

	cout << "How many cars would you like to register?" << endl;
	cin >> amountOfCars;

	for (int i = 0; i < amountOfCars; i++) {

		cout << endl << "Name of car owner: ";
		cin >> name;
		cout << endl << "Address of owner: ";
		cin >> address;
		cout << endl << "Is the owner allowed to drive? 1/0: ";
		cin >> allowedToDrive;
		cout << endl << "Model of car: ";
		cin >> model;
		cout << endl << "Color of car: ";
		cin >> color;
		cout << endl << "Width of the vehicle: ";
		cin >> width;
		cout << endl << "Height of the vehicle: ";
		cin >> height;
		cout << endl << "Number of cylinders: ";
		cin >> numberOfCylinders;
		cout << endl << "Size in liters: ";
		cin >> sizeInLiters;
		cout << endl << "Number of tires: ";
		cin >> numberOfTires;
		cout << endl;

		Owner owner(name, address, allowedToDrive);
		Engine engine(sizeInLiters, numberOfCylinders);
		Body body(color, height, width);
		MotorVehicle vehicle(engine, body, owner, numberOfTires, model);

		vehicle.print();
		for (int i = 0; i < 15; i++) {
			cout << "-";
		}
	}

	system("pause");
}