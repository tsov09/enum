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
	static Department department;
	/*static void set_department(string dep) {
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
	}*/
	static string get_department_name(Department dep) {
		switch (dep)
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
	static Department get_department_floor(string dep) {
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
	}
};



Department Patient::department = Psychiatric;
int main() {
	string dep = Patient::get_department_name(Patient::department);

	cout << dep << " department floor is " ;
	cout << Patient::get_department_floor(dep) << "." << endl;

	return 0;
}