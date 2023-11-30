//Strings 
#include <iostream>
using namespace std;
int main () {
	
	    string name ;
		string celebrity ;
		string number;
		string verb ;
		string noun ;
		string adjective ;
	    
	    cout << "Enter your name: " ;
	    getline(cin,name);
	    
	    cout << "Enter your favourite Celebrity: " ;
	    getline(cin,celebrity);
	    
	    cout << "Enter any number: " ;
	    getline(cin,number);
	    
	    cout << "Enter a verb: " ;
	    getline(cin,verb);
	    
	    cout << "Enter a noun: " ;
	    getline(cin,noun);
	    
	    cout << "Enter an adjective: " ;
	    getline(cin,adjective);
	    
	    
	    
		cout << "My name is " << name << " , and I have known " << celebrity << " for " << number << " years." << endl;
		cout << "I have " << verb << " all my work today to celebrate " << celebrity << "'s birthday " << endl;
		cout << "I am so " << adjective << " that " << celebrity << " was born on this day";
	
		
	return 0;
}

