#include <IOstream>
#include "Engine.h"

using namespace std;

Engine::Engine(float sizeInLitersIn, int numberOfCylindersIn) {
	sizeInLiters = sizeInLitersIn;
	numberOfCylinders = numberOfCylindersIn;
}

void Engine::print() {
	cout << "Size in liters: " << sizeInLiters << endl << "Number of cylinders: " << numberOfCylinders << endl;
}

Engine::~Engine() {

}
