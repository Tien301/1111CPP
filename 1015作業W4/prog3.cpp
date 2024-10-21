#include <iostream>
#include<cstdlib>

using namespace std;

int main(void)
{  //可以睡幾分鐘 
  int h1,h2,m1,m2;  //h1:m1 代表現在的時與分，h2:m2 則代表鬧鈴所設的時間 (時與分)
  

  
  for(int i=1 ;i<=2; i++)
    {
    	cout <<"h1:";  //(0<=h1<=23, 0<=m1<=59, 0<=h2<=23, 0<=m2<=59)。
        cin >> h1;
        cout << "m1:" ;
        cin >> m1 ; 
        
        cout <<"h2:";
        cin >> h2;
        cout << "m2:" ;
        cin >> m2 ; 
        
    	if ( (h2-h1)>0 )  //正常情況 
		   {
		   	  cout <<"Result:" << (h2-h1)*60 + (m2-m1) <<endl ;
		   }
		if ( (h2-h1)<0 )  //超過12點的
		   {
		   	  cout <<"Result:" << (h2-h1+24)*60 + (m2-m1) <<endl ;
		   }
		if ( (h2-h1)==0 && (m2-m1) <=0)  //隔一天的 
		   {
		   	  cout <<"Result:" << 24*60 + (m2-m1) <<endl ;
		   }  
		if ( (h2-h1)==0 && (m2-m1) >0)  //睡不到一小時
		   {
		   	  cout <<"Result:" << (m2-m1) <<endl ;
		   }  
    }
    
        cout <<"h1:";  //(0<=h1<=23, 0<=m1<=59, 0<=h2<=23, 0<=m2<=59)。
        cin >> h1;
        cout << "m1:" ;
        cin >> m1 ; 
        
        cout <<"h2:";
        cin >> h2;
        cout << "m2:" ;
        cin >> m2 ; 
        
    	if ( (h2-h1)>0 )  //正常情況 
		   {
		   	  cout <<"Result:" <<(h2-h1)*60 + (m2-m1)  ;
		   }
		//超過12點的
		if ( (h2-h1)<0 )  
		   {
		   	  cout <<"Result:" <<(h2-h1+24)*60 + (m2-m1)  ;
		   }
		
		if ( (h2-h1)==0 )  //隔一天了 
		   {
		   	  cout <<"Result:" << 24*60 + (m2-m1)  ;
		   }
  return 0;
}
