#include <iostream>
#include<cstdlib>

using namespace std;

int main(void)
{ 
 int y;
 
 for(int i=1;i<4; i++){
 	
 	cout << "Year:";
 	cin >>y;
 	
 	if((y%4)!=0) 
 		cout << "No"<< endl;
    else if ((y%4)==0 && (y%100)!=0)
        cout << "Yes"<< endl; 
    else if ((y%100)==0 && (y%400)!=0)
        cout << "No"<< endl;    
    else if ((y%400)==0 )
        cout << "Yes"<< endl;
    else 
	    cout << "No"<< endl;   
 }
 
 cout << "Year:";
 	cin >>y;
 	
 	if((y%4)!=0) 
 		cout << "No";
    else if ((y%4)==0 && (y%100)!=0)
        cout << "Yes"; 
        
    else if ((y%100)==0 && (y%400)!=0)
        cout << "No";    
    else if ((y%400)==0 )
        cout << "Yes";
        
    else 
	    cout << "No";  
return 0;
}
