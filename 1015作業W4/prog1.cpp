#include <iostream>
#include<cstdlib>

using namespace std;

int main(void)
{ 
  int n,R,c;
 
  
  //輸入一個七位數整數
    
      cout <<"Integer1:";
      cin >> n;
      cout << "Compare:" ;
      cin >> c ;
      R=0;

      if(n/1000000==c)  //左邊第一位 
        R++;  
      if ((n%1000000)/100000==c)  //左邊第二位 
        R++; 
      if ((n%100000)/10000==c)  //左邊第三位 
        R++; 
      if ((n%10000)/1000==c)  //左邊第4位 
        R++; 
      if ((n%1000)/100==c)  //左邊第5位 
        R++; 
	  if ((n%100)/10==c)  //左邊第6位 
        R++;  
      if ((n%10)==c)  //左邊第7位 
        R++;    
        
    cout << "Result:" <<R << endl;   
	
    cout <<"Integer2:";
      cin >> n;
      cout << "Compare:" ;
      cin >> c ;
      R=0;

      if(n/1000000==c)  //左邊第一位 
        R++;  
      if ((n%1000000)/100000==c)  //左邊第二位 
        R++; 
      if ((n%100000)/10000==c)  //左邊第三位 
        R++; 
      if ((n%10000)/1000==c)  //左邊第4位 
        R++; 
      if ((n%1000)/100==c)  //左邊第5位 
        R++; 
	  if ((n%100)/10==c)  //左邊第6位 
        R++;  
      if ((n%10)==c)  //左邊第7位 
        R++;    
        
     cout << "Result:" <<R << endl;  
	  
     cout <<"Integer3:";
      cin >> n;
      cout << "Compare:" ;
      cin >> c ;
      R=0;

      if(n/1000000==c)  //左邊第一位 
        R++;  
      if ((n%1000000)/100000==c)  //左邊第二位 
        R++; 
      if ((n%100000)/10000==c)  //左邊第三位 
        R++; 
      if ((n%10000)/1000==c)  //左邊第4位 
        R++; 
      if ((n%1000)/100==c)  //左邊第5位 
        R++; 
	  if ((n%100)/10==c)  //左邊第6位 
        R++;  
      if ((n%10)==c)  //左邊第7位 
        R++;    
        
     cout << "Result:" <<R; 
  
  return 0;
}
