#include <iostream>
using namespace std;
int main() {
	int i;
	cout << "ingrece el numero par hasta el que desea llegar \n" << endl;
	cin >> i;
	for (int a = 2; a <= i;a+=2) {
		cout << a <<"\n";
	}
	return 0;
}