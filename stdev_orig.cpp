#include<iostream>
#include<iomanip>
#include<string.h>
#include<math.h>
using namespace std;
void StandardDeviation(double [], int) ;
int main(){
    double myarray[30];
    int limit;
    cin >> limit;
    if(limit > 1 && limit <= 10){
		for(int i = 0; i < limit; i++){
			cin >> myarray[i];
		}
		StandardDeviation(myarray, limit);
    }
    else{
    	cout << "OUT OF RANGE";
    }
}
void StandardDeviation(double myarray[], int limit){
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
	cout << setprecision(2) << fixed << mean << "," << stdDevI;
}
