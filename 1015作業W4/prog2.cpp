#include <iostream>
#include<cstdlib>

using namespace std;

int main(void)
{   
    //8:10 開始，最後一堂課則在 16:30 下課
  int h1,m1;
  
  
  
   for(int i=0 ;i<=2; i++)
    {
    	cout <<"h1:";
        cin >> h1;
  
        cout << "m1:" ;
        cin >> m1 ; 
        
    	if(h1>8 && h1<16)
    	  {
    	  	cout << "Result:OK" << endl;
    	  	i++;
		  }
		
	    else if(h1==8)
		  {
			if (m1>=10){
			  cout << "Result:OK" << endl;
    	   	  i++;
			}
		  }  
		  
		else if(h1==16)
		  {
		  	if (m1<=30){
		  	  cout << "Result:OK"<< endl ;
    	   	  i++;
	    	}
		   } 
		
		  
	}
     //最後一行不換行所以單獨提出來 
        cout <<"h1:";
        cin >> h1;
  
        cout << "m1:" ;
        cin >> m1 ; 
        
    	if(h1>8 && h1<16)
    	  {
    	  	cout << "Result:OK" ;
    	  	
		  }
		
	    else if(h1==8)
		  {
			if (m1>=10){
			  cout << "Result:OK";
    	   	 
			}
		  }  
		  
		else if(h1==16)
		  {
		  	if (m1<=30){
		  	  cout << "Result:OK";
    	   	 
	    	}
		   } 
  return 0;
}
