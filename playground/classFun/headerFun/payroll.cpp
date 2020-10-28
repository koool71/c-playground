#include "employee.h"

using namespace std;

int main(){
	Employee emp("Chris Jordan", 40);
	double pr = 0;

	cout << emp.getName() << endl;
	cout << emp.getPayRate() << endl;
	pr = emp.getPayRate();
	cout << emp.pay(pr) << endl;

	return 0;
}