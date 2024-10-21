#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int a,b,c,d;
	
   	int number[5];
	for(int i=0;i<5;i++){
   		cout << "Input" << i+1 << ":";
   		cin >> number[i];
	   }
	   
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			
			a=number[i]-number[j];
			if(a<0){
				a=a*(-1);
			}
			if(a>c){
				c=a;
				b=number[i];
				d=number[j];
			}
		}
		
	}
	cout << "Result:" << b << " " << d << " "; 
	return 0;
} 
