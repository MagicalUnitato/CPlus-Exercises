//just writing
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	double n;
	cin >> n;
	ofstream myfile;
	myfile.open("ex1.txt");
	myfile << n * n;
	myfile.close();
	return 0;
}
