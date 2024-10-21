#include <iostream>
#include<cstdlib>

using namespace std;

int main(void)
{
	
	int n,s=0;
	
	
    do {
	  cout << "Input:";
      cin >> n;
      
      if((n%2)!=0 && n>0 )
        {
       	 s=s+n;
	    }
	}while(n!=0);
    
    cout << "Result:" << s;
     
     	
	 
    return 0;
}
