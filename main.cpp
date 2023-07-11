#include <iostream>
using namespace std;

enum Department {
	Reception = 1,
	Therapy,
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
			return "Reception";
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
			return Reception;
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