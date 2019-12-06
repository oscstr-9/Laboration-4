#include <IOstream>
#include <string>
#include <time.h>

#include "MotorVehicle.h"

using namespace	std;

MotorVehicle::MotorVehicle(Engine engineIn, Body bodyIn, Owner ownerIn, int numberOfTiresIn, string modelIn) :engine(engineIn), body(bodyIn), owner(ownerIn) {
	numberOfTires = numberOfTiresIn;
	model = modelIn;
	tireDiameters = new float[numberOfTires];

	srand((unsigned int)time(NULL));
	for (int i = 0; i < numberOfTires; i++) {
		tireDiameters[i] = rand() % 100 + 600;
	}

}

void MotorVehicle::print() {

	owner.print();
	cout << "model: " << model << endl;
	body.print();
	engine.print();
	cout << "Number of tires: " << numberOfTires << endl;

	for (int i = 0; i < numberOfTires; i++) {
		cout << "Diameter of tire " << i + 1 << ": " << tireDiameters[i] << endl;
	}
}

MotorVehicle::~MotorVehicle() {
	delete[] tireDiameters;
}