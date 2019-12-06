#pragma once
#include <string>

class Owner {

	std::string name, address;
	bool allowedToDrive;

public:
	Owner(std::string nameIn, std::string addressIn, bool allowedToDriveIn);

	void print();

	virtual ~Owner();


};

