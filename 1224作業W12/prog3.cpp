
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main(){

	string str;
	int m,n;
	
	cout<< "Input:";
	cin >> str;
	cout << "m:";
	cin >> m;
	cout << "n:";
	cin >> n;	
	cout << "Result:";
	
	for(int i=m-1;i<n;i++){
		
		if(str[i]>='a' && str[i]<='z')
		  str[i] = toupper(str[i]);
		else if(str[i]>='A' && str[i]<='Z')
		  str[i] = tolower(str[i]);  
		  
		cout << str[i];
	}
	return 0;
	
} 
