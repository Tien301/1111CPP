#include <iostream>
#include<cstdlib>

using namespace std;

int main(void)
{  //�i�H�δX���� 
  int h1,h2,m1,m2;  //h1:m1 �N��{�b���ɻP���Ah2:m2 �h�N��x�a�ҳ]���ɶ� (�ɻP��)
  

  
  for(int i=1 ;i<=2; i++)
    {
    	cout <<"h1:";  //(0<=h1<=23, 0<=m1<=59, 0<=h2<=23, 0<=m2<=59)�C
        cin >> h1;
        cout << "m1:" ;
        cin >> m1 ; 
        
        cout <<"h2:";
        cin >> h2;
        cout << "m2:" ;
        cin >> m2 ; 
        
    	if ( (h2-h1)>0 )  //���`���p 
		   {
		   	  cout <<"Result:" << (h2-h1)*60 + (m2-m1) <<endl ;
		   }
		if ( (h2-h1)<0 )  //�W�L12�I��
		   {
		   	  cout <<"Result:" << (h2-h1+24)*60 + (m2-m1) <<endl ;
		   }
		if ( (h2-h1)==0 && (m2-m1) <=0)  //�j�@�Ѫ� 
		   {
		   	  cout <<"Result:" << 24*60 + (m2-m1) <<endl ;
		   }  
		if ( (h2-h1)==0 && (m2-m1) >0)  //�Τ���@�p��
		   {
		   	  cout <<"Result:" << (m2-m1) <<endl ;
		   }  
    }
    
        cout <<"h1:";  //(0<=h1<=23, 0<=m1<=59, 0<=h2<=23, 0<=m2<=59)�C
        cin >> h1;
        cout << "m1:" ;
        cin >> m1 ; 
        
        cout <<"h2:";
        cin >> h2;
        cout << "m2:" ;
        cin >> m2 ; 
        
    	if ( (h2-h1)>0 )  //���`���p 
		   {
		   	  cout <<"Result:" <<(h2-h1)*60 + (m2-m1)  ;
		   }
		//�W�L12�I��
		if ( (h2-h1)<0 )  
		   {
		   	  cout <<"Result:" <<(h2-h1+24)*60 + (m2-m1)  ;
		   }
		
		if ( (h2-h1)==0 )  //�j�@�ѤF 
		   {
		   	  cout <<"Result:" << 24*60 + (m2-m1)  ;
		   }
  return 0;
}
