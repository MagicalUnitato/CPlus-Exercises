// opening and writing into a text file
#include <iostream>
#include <fstream>
using namespace std;
int main () {
  string str;
  cout<<"ENTER STRING: ";
  cin>>str;
  ofstream myfile;
  myfile.open ("example.txt"); /* or myfile.open ("myfile.txt", ofstream::app);  to append*/
  myfile << str;
  myfile.close();
  cout<<"\n\nRECORDED";
}
