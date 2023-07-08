#include <iostream>
using namespace std;

enum Department {
	Therapy = 1,
	Surgery,
	Cardiology,
	Gastroenterology,
	Gynecology,
	Infectious_Disease,
	Psychiatric,

};

class Patient {
public:
	void set_department(string dep) {
		if (dep == "Therapy") {
			this->depardment = Therapy;
		}
		else if (dep == "Surgery") {
			this->depardment = Surgery;
		}
		else if (dep == "Cardiology") {
			this->depardment = Cardiology;
		}
		else if (dep == "Gastroenterology") {
			this->depardment = Gastroenterology;
		}
		else if (dep == "Gynecology") {
			this->depardment = Gynecology;
		}
		else if (dep == "Infectious_Disease") {
			this->depardment = Infectious_Disease;
		}
		else if (dep == "Psychiatric") {
			this->depardment = Psychiatric;
		}
		else {
			cout << "Department is undefined" << endl;
			exit(0);
		}
	}
	string get_department_name() {
		switch (this->depardment)
		{
		case Therapy:
			return "Therapy";
		case Surgery:
			return "Surgery";
		case Cardiology:
			return "Cardiology";
		case Gastroenterology:
			return "Gastroenterology";
		case Gynecology:
			return "Gynecology";
		case Infectious_Disease:
			return "Infectious_Disease";
		case Psychiatric:
			return "Psychiatric";
		default:
			cout << "Department is undefined" << endl;
			exit(0);
		}
	}
	Department get_department_floor(string dep) {
		if (dep == "Therapy") {
			return Therapy;
		}
		else if (dep == "Surgery") {
			return Surgery;
		}
		else if (dep == "Cardiology") {
			return Cardiology;
		}
		else if (dep == "Gastroenterology") {
			return Gastroenterology;
		}
		else if (dep == "Gynecology") {
			return Gynecology;
		}
		else if (dep == "Infectious_Disease") {
			return Infectious_Disease;
		}
		else if (dep == "Psychiatric") {
			return Psychiatric;
		}
		else {
			cout << "Department is undefined" << endl;
			exit(0);
		}
		return this->depardment;
	}
private:
	Department depardment;
};



int main() {
	Patient patient;
	patient.set_department("Psychiatric");

	string dep = patient.get_department_name();

	cout << dep << " department floor is " ;
	cout << patient.get_department_floor(dep) << "." << endl;

	return 0;
}