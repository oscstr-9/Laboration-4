#pragma once
#include <string>

class Body {

	std::string color;
	float width, height;

public:
	Body(std::string colorIn, float widthIn, float heightIn);

	void print();

	virtual ~Body();

};

