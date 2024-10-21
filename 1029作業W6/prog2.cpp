#include <iostream>
#include<cstdlib>

using namespace std;

int main(void)
{
	int n,s=0;
	cout << "Integer:";
	cin >>n; 
	cout << "Result"<< endl;
	for(int i=1;i<=n; i++){
		
		if(n%i == 0)
		{
			
			cout << i << endl;
			s=s+1;
		}
		
	}
	if(s==2)
		 cout << "Prime" << endl;
		 
	s=0;
		 
	cout << "Integer:";
	cin >>n; 
	cout << "Result"<< endl;
	for(int i=1;i<=n; i++){
		
		if(n%i == 0)
		{
			
			cout << i << endl;
			s=s+1;
		}
		
	}
	if(s==2)
	  cout << "Prime" << endl;
	  
	s=0;  
	  
	cout << "Integer:";
	cin >>n; 
	cout << "Result"<< endl;
	for(int i=1;i<=n; i++){
		
		if(n%i == 0)
		{
			
			cout << i << endl;
			s=s+1;
		}
		
	}
	if(s==2)
		 cout << "Prime" ; 
    return 0;
}
