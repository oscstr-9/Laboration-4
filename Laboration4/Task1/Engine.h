#pragma once

class Engine {

	float sizeInLiters;
	int numberOfCylinders;

public:
	Engine(float sizeInLitersIn, int numberOfCylindersIn);

	void print();

	virtual ~Engine();

};

