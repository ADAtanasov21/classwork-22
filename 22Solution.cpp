#include <iostream>
using namespace std;

class Rectangle 
{
public:
	float lenght;
	float height;

	Rectangle(float l, float h) 
	{
		lenght = l;
		height = h;
	}

	float perimeter() {
		return 2 * (lenght + height);
	}
	int area()
	{
		return lenght * height;
	}
};

int main()
{
	float length, height;
	cin >> length >> height;
	Rectangle rect(length, height);
	float perimeter = rect.perimeter();
	float area = rect.area();
	cout << "Perimeter = " << perimeter << endl;
	cout << "Area = " << area << endl;

	return 0;
}