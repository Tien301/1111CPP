#include <iostream>
#include<cstdlib>

using namespace std;

int main(void)
{
    int a,b,c;
    
    cout <<"Integer1:";
	cin >> a; 
    if (a%3==0 && a%5==0 && a%7!=0)
	  cout << "OK" <<endl; 
	  
	cout <<"Integer2:";
	cin >> b; 
    if (b%3==0 && b%5==0 && b%7!=0)
	  cout << "OK" <<endl; 
	  
	cout <<"Integer3:";
	cin >> c; 
    if (c%3==0 && c%5==0 && c%7!=0)
	  cout << "OK" <<endl;   
    return 0;
}
