#include <IOstream>
#include "Owner.h"

using namespace std;

Owner::Owner(string nameIn, string addressIn, bool allowedToDriveIn) {

	name = nameIn;
	address = addressIn;
	allowedToDrive = allowedToDriveIn;
}

void Owner::print() {
	cout << "Name of owner: " << name << endl << "Address of owner: " << address << endl << "Is allowed to drive, 1/0: " << allowedToDrive << endl;
}

Owner::~Owner() {

}
