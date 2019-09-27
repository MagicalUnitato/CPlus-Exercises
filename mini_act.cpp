#include <iostream>
#include <string.h>
using namespace std;
void program1();
void program2();
void program3();
void program4();
int main(){
	int x;
	cout << "Pick A Program\n";
	cout << "Program 1 : 1\n";
	cout << "Program 2 : 2\n";
	cout << "Program 3 : 3\n";
	cout << "Program 4 : 3\n";
	cout << "Pick:";
	cin >> x;
	if(x == 1){
		program1();
	}
	else if(x == 2){
		program2();
	}
	else if(x == 3){
		program3();
	}
	else if(x == 4){
		program4();
	}
}
void program1(){
	char letters[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int x;
	cin >> x;
	if(x <= 26){
		cout <<"Letter is: "<< letters[x-1];
	}
	else if(x > 26){
		while(x > 26){
			x = x - 26;
		}
		cout << letters[x-1];
	}
}
void program2(){
	char myarray[30],letters[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"} ;
	int narray[30],sum;
	cin >> myarray;
	for(int i = 0; i < strlen(myarray);i++){
		myarray[i] = toupper(myarray[i]);
	}
	for(int i = 0; i < strlen(myarray); i++){
		for(int j = 0; j < strlen(letters);j++){
			if(myarray[i] == letters[j]){
				sum += (j + 1);
			}
		}
	}
	cout << "Sum:" << sum;
}
void program3(){
	char cons[] = {"BCDFGHJKLMNPQRSTVWXYZ"}, vow[] = {"AEIOU"},myarray[50];
	int check[50],valid;
	cin >> myarray;
	for(int i = 0; i < strlen(myarray);i++){
		myarray[i] = toupper(myarray[i]);
	}
	for(int i = 0; i < strlen(myarray);i++){
		for(int x = 0; x < strlen(cons); x++){
			if(myarray[i] == cons[x]){
				check[i] = 0;
			}
		}
		for(int y = 0; y < strlen(vow); y++){
			if(myarray[i] == vow[y]){
				check[i] = 1;
			}		
		}
	}
	for(int z = 0; z < strlen(myarray); z++){
		if(check[z] == 0 && check[z+1] == 1 || check[z] == 1 && check[z+1] == 0){
			valid = 1;
		}
		else if(check[z] == 0 && check[z+1] == 0 || check[z] == 1 && check[z+1] == 1){
			valid = 0;
			break;
		}
		cout << check[z];
	}
	if(valid = 1){
		cout << "VALID";
	}
	else{
		cout << "INVALID";
	}
}
void program4(){
	int limit, x[30];
	cin >> limit;
	//cin >> x;
	for(int i = 0; i < limit; i++){
		cin >> x[i];
	}
	for(int i = 0; i < limit; i++){
		if((x[i+1]) != 0){
			cout << x[i] << "+" << x[i+1] << "=" << x[i] + x[i+1] << endl;
		}
		else{
			break;
		}
	}
}
