#include <iostream>

using namespace std;

class Shape {
	public:
		void setHeight(int x){
			height = x;
		}
		void setWidth(int y){
			width = y; 
		}
		int getHeight(){
			return height;
		}
		int getWidth(){
			return width;
		}
	protected:
		int height;
		int width;
};

class PaintCost {
	public:
		void setCost(int amount){
			cost = amount;
		}
		int getCost(int area){
			return(area*cost); 
		}
	protected:
		int cost;
};

class Rectangle: public Shape, public PaintCost {
	public:
		int getArea(){
			return(height*width);
		}
};


int main(){

	Rectangle rect;
	rect.setHeight(3);
	rect.setWidth(4);
	cout << rect.getHeight() << endl;
	cout << rect.getWidth() << endl;
	cout << rect.getArea() << endl;

	int area = 0;
	int cost = 70;
	Rectangle roomCost;
	roomCost.setHeight(40);
	roomCost.setWidth(50);
	area = roomCost.getArea();
	roomCost.setCost(cost);
	cout << roomCost.getCost(area) << endl;


	return 0;
}