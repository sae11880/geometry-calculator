//creating a calculator that includes 4 options

//first we need to display all the options we are offering

#include <iostream>
using namespace std;


void displaymenu() {
	cout << "Ariannas Calculator" << endl;
	cout << "1. Calculate the area of a circle" << endl;
	cout << "2. Calculate the area of a rectangle" << endl;
	cout << "3. Calculate the area of a triangle" << endl;
	cout << "4. Exit calculator" << endl;

}

//we now have to create the equations for each of the options 

double CalculateCircleArea(double radius) {
	const double PI = 3.14159;
	return PI * radius * radius;
}

double CalculateRectangleArea(double length, double width) {
	return length * width;
}

double CalculateTriangleArea(double base, double height) {
	return base * height * 0.5;
}

//now we make it so people can choose a option from the calulator and it will actually run

int main() {
	int choice;
	do {
		displaymenu();
		cin >> choice;

		//this is our circle display
		if (choice < 1 || choice>4) {
			cout << "Error invalid choice--please try agaian and choose a number between 1-4"<<endl;
			continue;
			}
		if (choice == 1) {
			double radius;
			cout << "Enter the radius of chosen circle: " << endl;
			cin >> radius;
			if (radius < 0) {
				cout << "error--enter non negative number " << endl;
			}
			else {
				double area = CalculateCircleArea(radius);
				cout << "the area of the circle is " << area << endl;
			}
		}
		//this is our rectanlge display
		else if (choice == 2) {
			double length, width;
			cout << "Enter the length of the rectangle: ";
			cin >> length;
			cout << "Enter the width of the rectangle: ";
			cin >> width; 
			if (length < 0 || width < 0) {
				cout << "Error--enter non negative numbers." << endl;
			} else {
				double area = CalculateRectangleArea(length, width);
				cout << "The area of the rectangle is " << area << endl;
			}
		}
		//this is our triangle display
		else if (choice == 3) {
			double base, height; cout << "Enter the base of the triangle: ";
			cin >> base;
			cout << "Enter the height of the triangle: ";
			cin >> height;
			if (base < 0 || height < 0) {
				cout << "Error--enter non negative numbers." << endl;
			}
			else {
				double area = CalculateTriangleArea(base, height);
				cout << "The area of the triangle is " << area << endl;

			}


		}
		//lastly we create an exit for the program to end the reccuring cycle
	} while (choice != 4);
	cout << "Program ended." << endl;
	return 0;
}

