#include <iostream>
#include<cstdlib>

using namespace std;

int main(void)
{   
    //8:10 �}�l�A�̫�@��ҫh�b 16:30 �U��
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
     //�̫�@�椣����ҥH��W���X�� 
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
