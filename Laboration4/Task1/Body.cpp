#include <IOstream>
#include "Body.h"

using namespace std;

Body::Body(std::string colorIn, float widthIn, float heightIn) {
	color = colorIn;
	width = widthIn;
	height = heightIn;
}

void Body::print() {
	cout << "Color: " << color << endl << "Width: " << width << endl << "Height: " << height << endl;
}
Body::~Body() {

}
