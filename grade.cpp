//just writing
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	double n;
	cin >> n;
	if(n >= 60 && n <= 100){
		ofstream myfile;
		myfile.open("ex2.txt",ofstream::app);
		myfile << n;
		myfile << ","; // adds comma
		myfile.close();
		cout << "File Saved\n";
	}
	else{
		cout << "Please enter a valid number\n";
	}
	main();
}	
