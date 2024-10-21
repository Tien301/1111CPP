#include <iostream>
#include<cstdlib>

using namespace std;

int main(void)
{
	
	int n;
	double s=0;
    cout<<"Integer:" ;
    cin >> n;
    
    for (double i=0; i<=n ; i++)
      {
          s=s+ ((i+1)/(n+i)); 
	  }
    cout <<"Result:" <<s << endl;
	
	s=0;
	
	cout<<"Integer:" ;
    cin >> n;
    
    for (double i=0; i<=n ; i++)
      {
          s=s+ ((i+1)/(n+i)); 
	  }
    cout <<"Result:" <<s;
    return 0;
}
