#include <iostream>
using namespace std;

class StudentRecord {
private:
	string name;
	string middleName = "";
	string dept;
	int roll;
	float CGPA;
public:

	StudentRecord(string n, string d, int r, float c) {
		name = n;
		dept = d;
		roll = r;
		CGPA = c;
	}

	StudentRecord(string n, string m, string d, int r, float c) {
		name = n;
		middleName = m;
		dept = d;
		roll = r;
		CGPA = c;
	}

	int printRecord() {
		cout << "Name: " << name << endl;
		if (middleName != "") {
			cout << "Middle Name: " << middleName << endl;
		}
		cout << "Department: " << dept << endl;
		cout << "Roll No: " << roll << endl;
		cout << "CGPA: " << CGPA << endl;

		return 0;
	}

	bool hasHigherCGPA(StudentRecord other) {
		if (CGPA > other.CGPA) {
			return true;
		}
		else { return false; }
	}

};


int main() {
	StudentRecord student1("Akash", "NWC", 2, 9.6);
	StudentRecord student2("Someone", "Middle Name", "NWC", 1, 9.4);

	student1.printRecord();
	student2.printRecord();

	cout << "is student 1's CGPA higher than student 2'? (1 means true, 0 means false): " << student1.hasHigherCGPA(student2) << endl;

	return 0;
}