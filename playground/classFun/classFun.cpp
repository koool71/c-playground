#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

// Hello World class definition & initialization 
class helloWorld{
	public:
		helloWorld(){
			cout << "Hello World object created" << endl;
		}

		int factorial(int a){
			if(a <= 1){
				return 1;
			}
			return(a* factorial(a-1));
		}
};

// Shape Class Definition
class Shape{
	public:
		Shape();
		Shape(int x);
		void setNumSides(int x);
		int getNumSides(void);
		void identify(int x);
	private:
		int numSides;
		vector<string> shapes;

};

// Member functions of Shape class
Shape::Shape(){
	cout << "Shape object created" << endl;

	shapes.push_back("null");
	shapes.push_back("null");
	shapes.push_back("null");
	shapes.push_back("Triangle");
	shapes.push_back("Square");
	shapes.push_back("Pentagon"); 
	shapes.push_back("Hexagon");
	shapes.push_back("Heptagon"); 
	shapes.push_back("Octagon");
}

Shape::Shape(int x){
	cout << "Shape object created" << endl;

	numSides = x;

	shapes.push_back("null");
	shapes.push_back("null");
	shapes.push_back("null");
	shapes.push_back("Triangle");
	shapes.push_back("Square");
	shapes.push_back("Pentagon"); 
	shapes.push_back("Hexagon");
	shapes.push_back("Heptagon"); 
	shapes.push_back("Octagon");

	identify(numSides);
}

void Shape::setNumSides(int num){
	numSides = num;
}

int Shape::getNumSides(){
	return numSides;
}

void Shape::identify(int x){
	if(x > 2 && x < 9){
		cout << shapes[x] << endl;
	}
	else{
		cout << "I don't know what shape this is" << endl;
	}
	return;
}

// Main Function 
int main(){
	helloWorld hello;

	cout << hello.factorial(5) << endl;

	Shape square;
	square.setNumSides(4);
	square.identify(square.getNumSides());

	Shape tri(3);
	Shape hep(7);
	Shape oct(8);
	

}