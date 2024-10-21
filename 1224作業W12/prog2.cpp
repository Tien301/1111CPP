#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){

	string str;
	int a=0,e=0,I=0,o=0,u=0;
	
	cout<< "Input:";
	cin >> str;
	for(int i=0;i<str.length();i++){
		
		if(str[i]=='a' || str[i]=='A'){
			a++;
		}
		else if(str[i]=='e' || str[i]=='E'){
			e++;
		}
		else if(str[i]=='i' ||str[i]=='I'){
			I++;
		}
		else if(str[i]=='o' ||str[i]=='O'){
			o++;
		}
		else if(str[i]=='u' ||str[i]=='U'){
			u++;
		}
	}
	cout<< "A:"<< a << endl << "E:"<< e << endl<< "I:"<< I << endl;  
	cout<< "O:"<< o << endl << "U:"<< u ; 
	
	return 0;
	
} 
