#include<iostream>
#include<cstdlib>

using namespace std;

int main(void){
	
	
	
    double m,n,c,d;
	cout << "m:";
	cin >> m;
	cout << "n:" ;
	cin >>n;
	
	   for(double i=m; i<=n; i=i+2){
	   	  c= c+double(1/i) ;
	  
		} 
		
		for(double i=(m+1); i<=n; i=i+2){
	   	  d=d-double(1/i) ;
	   	  
		} 
		cout<<  "Result:"<<c+d<<endl;
		
		m=0;
		n=0;
		c=0;
		d=0;
	
	cout << "m:";
	cin >> m;
	cout << "n:" ;
	cin >>n;
	
  
	

	   for(double i=m; i<=n; i=i+2){
	   	  c= c+double(1/i) ;
	  
		} 
		
		for(double i=(m+1); i<=n; i=i+2){
	   	  d=d-double(1/i) ;
	   	  
		}  
		cout<< "Result:"<<c+d;
	
	return 0;
} 

