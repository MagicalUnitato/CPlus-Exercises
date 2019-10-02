#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
using namespace std;

int main () {
	int x , count = 0, limit = 0, space = 0;
	char y;
	string line;
	ifstream myfile ("input.txt");
	if(myfile.is_open()){
		while(myfile.good()){
			getline (myfile,line);
		}
		stringstream convert(line);
		convert >> x;
		convert >> y;
		cout << x << endl;
		cout << y << endl;
		limit = x * 2;
		space = x - 1;
        for(int j = 0; j < limit; j++){
            if(j % 2 == 0){
                space = space - 1;
                for(int k = 0; k <= space; k++){
                    cout << " ";
                }
                for(int l = 0; l <= j; l++){
                    if(l != j){
                           cout << y;
                    }
                    else{
                        cout << y << endl;
                    }
                }
            }
        }
		myfile.close();
	}
	else{
		cout << "Unable to open file";
	}
}
