#include <iostream>
#include<cstdlib>

using namespace std;

int main(void)
{ 
  int d;
  double D;
  
 //���q�p��
  
  
  cout<< "Input1:";
  cin >> d;
  
  if(d<=120)
    D=d*1.63; 
  else if  (d>120 && d<=330)
    D=(d-120)*2.38+120*1.63;
    
  else if  (d>330 && d<=500)
    D=(d-330)*3.52+210*2.38+120*1.63;
    
  else if  (d>500 && d<=700)
    D=(d-500)*4.8+170*3.52+210*2.38+120*1.63;
	  
  else if  (d>700 && d<=1000)
    D=(d-700)*5.66+500*4.8+170*3.52+210*2.38+120*1.63;
	 
  else if  (d>1000)
    D=(d-1000)*6.41+700*5.66+500*4.8+170*3.52+210*2.38+120*1.63;	 

  cout << "Result1:" << D<< endl;
 
  D=0;
  
  cout << "Input2:" ;
  cin >> d;
  
  if(d<=120)
    D=d*1.63; 
  else if  (d>120 && d<=330)
    D=(d-120)*2.38+120*1.63;
    
  else if  (d>330 && d<=500)
    D=(d-330)*3.52+210*2.38+120*1.63;
    
  else if  (d>500 && d<=700)
    D=(d-500)*4.8+170*3.52+210*2.38+120*1.63;
	  
  else if  (d>700 && d<=1000)
    D=(d-700)*5.66+500*4.8+170*3.52+210*2.38+120*1.63;
	 
  else if  (d>1000)
    D=(d-1000)*6.41+700*5.66+500*4.8+170*3.52+210*2.38+120*1.63;
  cout << "Result2:" << D;
  
 
  return 0;
}
