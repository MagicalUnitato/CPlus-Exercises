#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int x,y,z;
	cin >> x;
	ofstream myfile;
	myfile.open("ex3.txt",ofstream::app);
	myfile << "---------" << endl;
	if(x <= 50 && x > 1){
	    for(int i = 1; i <= x; i++){
	        for(int y = 1; y <= x; y++){
	            if(y == x){
	                myfile << i * y << endl;
	            }
	            else{
	                myfile << i * y << ".";
	            }
	        }
	    }
	}
	else{
	    cout << "OUT OF RANGE";
	}
	myfile.close();
	main();
}
