#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;
void StandardDeviation(vector <int>, int);
int input(int, int);
int main(){
    vector <int> values; // dynamic array hehe
    double myarray[30];
    int limit = 0 , n[100], count = 0, i;
	string line,name;
	ifstream myfile ("input15.txt"); // opens file
	if(myfile.is_open()){ // check if file is still open
		while(myfile.good()){ // checks our myfile is still giving data hence if its good
			getline(myfile,line); // gets the line from our file
			stringstream convert(line); // converts out line
            if(count == 0){ // first line is transferred to limit
                convert >> limit;
            }
            else{
                while(convert >> i){ // while our convert() still has values to be passed to i
                    values.push_back(i); // put the value i to our array values
                }
            }
            count++; // adds to count
        }
        myfile.close(); // closes file
	}
	else{
		cout << "Unable to open file";
	}
    //limit = input(x);
    if(limit > 1 && limit <= 10){
		StandardDeviation(values, limit); // calls function
    }
    else{
    	cout << "OUT OF RANGE";
    }
    //for(int i = 0; i < values.size();i++){
    //    cout << "Value" << i <<":"<< values[i] << endl;
    // this loop just checks if values has any data hehe
    //}
}
void StandardDeviation(vector <int> myarray, int limit){
	ofstream writeFile;
	writeFile.open("output15.txt"); // creates output15.txt to the sources main file
	double stdDev[50] , mean, stdDevI = 0, sum = 0 , limitD = limit;
	for(int i = 0; i < limitD; i++){ // sum of 1st array
		sum += myarray[i];
	}
	mean = sum / limitD ; // mean
	for(int i = 0; i < limitD; i++){ // standard deviation range
		stdDev[i] = (myarray[i] - mean) * (myarray[i] - mean);
	}
	sum = 0;
	for(int i = 0; i < limitD; i++){ // sum of range
		sum += stdDev[i];
	}
	stdDevI = sqrt(sum/limitD); // standard deviation
	// gives the data to our output15.txt
	writeFile << setprecision(2) << fixed <<"Mean and Standard Deviation:"<< mean << "," << stdDevI << endl;
	// closes writeFile
	writeFile.close();
}
