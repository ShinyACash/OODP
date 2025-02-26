#include <iostream>
using namespace std;

class SmartSecurity {
private:
	string doorStatus;
	string windowStatus;

public:

	SmartSecurity() {
		doorStatus = "locked";
		windowStatus = "locked";
	}

	int lockAll() {
		doorStatus = "locked";
		windowStatus = "locked";
		return 0;
	}

	int unlockAll() {
		doorStatus = "unlocked";
		windowStatus = "unlocked";
		return 0;
	}

	int displayStatus() {
		cout << "Door Status: " << doorStatus << endl;
		cout << "Window Status: " << windowStatus << endl;
		return 0;
	}

};


int main() {
	SmartSecurity mySec;
	mySec.displayStatus();
	mySec.unlockAll();
	mySec.displayStatus();
}