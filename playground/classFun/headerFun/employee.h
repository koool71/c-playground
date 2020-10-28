#include <iostream> 
#include <string>

using namespace std;

class Employee {
	public:
		Employee(string n, double pr);

		string getName() const;
		double getPayRate() const;

		double pay(double hoursWorked) const;
	protected:
		string name;
	    double payRate;
};