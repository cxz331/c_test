#include <iostream>
using namespace std;

class Shape{
	protected:
		int width, height;
	public:
		Shape(int a = 0, int b = 0){
			width = a;
			height = b;
		}
		int area(){
			cout << "Parent class area:" <<endl;
		}
};
class Rectangle: public Shape{
	public:
		Rectangle(int a = 0, int b = 0): Shape(a, b){

		}
}