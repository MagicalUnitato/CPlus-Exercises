// reading a text file
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main () {
	int n;
	string line,name;
	ifstream myfile ("ex1.txt");
	if(myfile.is_open()){
		while(myfile.good()){
			getline (myfile,line);
			cout << line << "\n";
		}
		stringstream convert(line);
		convert >> n;
		cout << n - 5;
		myfile.close();
	}
	else{
		cout << "Unable to open file";
	} 
}
