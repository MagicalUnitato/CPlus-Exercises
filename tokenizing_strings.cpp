// Tokenizing a string using stringstream
#include <bits/stdc++.h>

using namespace std;

int main(){
    string line = "GeeksForGeeks is a must try";

    // Vector of string to save tokens , vector is just a fancy term for self-sizing arrays
    vector <string> tokens;
    // stringstream class check1, treats the string as if its data coming from a file hence the stream
    stringstream check1(line); // converts

    // string holder before the string gets handed over to our vector
    string intermediate;

    // Tokenizing w.r.t. space ' ' , removing the space thing
    // Tokenizing : breaking down of text into individual units , hence we are removing 'spaces' in the text
    while(getline(check1, intermediate, ' ')){
        tokens.push_back(intermediate);
        // pushes vector elements to the back, example : vector currently is at [0]
        // then 1 is inputted by the user, so the array will now be [1,0] <<-- pushes back the past element and puts the new element at index[0]
	}
}
