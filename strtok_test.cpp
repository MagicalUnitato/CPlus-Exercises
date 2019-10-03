#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
#include <typeinfo>
using namespace std;

int main () {
	int x , count = 0, limit = 0, space = 0;
	char y , holder[100];
	string line;
	ifstream myfile ("input.txt");
	if(myfile.is_open()){
		while(myfile.good()){
			getline (myfile,line);
		}
		//stringstream convert(line);
		//convert >> x;
		//convert >> y;
		//cout << x << endl;
		//cout << y << endl;
		myfile.close();
		for(int i = 0;i < line.length();i++){
		    holder[i] = line[i];
		    cout << line[i];
		}
	    char *token = strtok(holder, " ");  
	    while (token != NULL){
	        //determine here if its an int or a string
	        //then assign to x(int) variable or y(char) variable
	        //you'll receive 2 data type (int or char)
	        cout << token;
	        if(token >= 0){
	        	x = strtol (token);
	        }else{
	        	y = token;
	        }
	        token = strtok(NULL, " ");
	    } 
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
	}
	else{
		cout << "Unable to open file";
	}
}
