#include "employee.h"


using namespace std;

Employee::Employee(string n, double pr){
	name = n;
	payRate = pr;
}

string Employee::getName() const{
	return name;
}

double Employee::getPayRate() const{
	return payRate;
}

double Employee::pay(double hoursWorked) const{
	return(payRate*hoursWorked);
}