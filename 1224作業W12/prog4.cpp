
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){

	string str;
	int k;
	
	
	
	for(int a=0;a<3;a++){
		cout<< "Input:";
		cin >> str;
		cout << "Result:";
		k=str.length();
		if(str[k-1]=='s' || str[k-1]=='z' || str[k-1]=='x' )
	  		cout << str << "es\n";
		else if(str[k-1]=='h' ){	
			if(str[k-2]=='c' || str[k-2]=='s')
	 			cout << str << "es\n";
				 }
		else if(str[k-1]=='y' ){	
			if(str[k-2]=='a' || str[k-2]=='e' || str[k-2]=='i' || str[k-2]=='o' || str[k-2]=='u' )
	 			cout << str << "s\n";
	 		else{
	 			str[k-1]='i';
	 			cout << str << "es\n";
			 }	    
		}	
		else
		  	 cout << str << "s\n";
	}
	
	
	//cout << k;
	return 0;
	
} 
