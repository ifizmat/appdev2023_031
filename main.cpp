#include <iostream>

class Car {
	public:
	  double X;
	  int    P;
	  double V;
	
};

int main() {
	using namespace std;
	cout << "Test v3.1: OK.\n";
	Car car;
	cout << "X: " << car.X << endl;
	cout << "P: " << car.P << endl;
	cout << "V: " << car.V << endl;
	return 0;
}
