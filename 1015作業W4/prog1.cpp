#include <iostream>
#include<cstdlib>

using namespace std;

int main(void)
{ 
  int n,R,c;
 
  
  //��J�@�ӤC��ƾ��
    
      cout <<"Integer1:";
      cin >> n;
      cout << "Compare:" ;
      cin >> c ;
      R=0;

      if(n/1000000==c)  //����Ĥ@�� 
        R++;  
      if ((n%1000000)/100000==c)  //����ĤG�� 
        R++; 
      if ((n%100000)/10000==c)  //����ĤT�� 
        R++; 
      if ((n%10000)/1000==c)  //�����4�� 
        R++; 
      if ((n%1000)/100==c)  //�����5�� 
        R++; 
	  if ((n%100)/10==c)  //�����6�� 
        R++;  
      if ((n%10)==c)  //�����7�� 
        R++;    
        
    cout << "Result:" <<R << endl;   
	
    cout <<"Integer2:";
      cin >> n;
      cout << "Compare:" ;
      cin >> c ;
      R=0;

      if(n/1000000==c)  //����Ĥ@�� 
        R++;  
      if ((n%1000000)/100000==c)  //����ĤG�� 
        R++; 
      if ((n%100000)/10000==c)  //����ĤT�� 
        R++; 
      if ((n%10000)/1000==c)  //�����4�� 
        R++; 
      if ((n%1000)/100==c)  //�����5�� 
        R++; 
	  if ((n%100)/10==c)  //�����6�� 
        R++;  
      if ((n%10)==c)  //�����7�� 
        R++;    
        
     cout << "Result:" <<R << endl;  
	  
     cout <<"Integer3:";
      cin >> n;
      cout << "Compare:" ;
      cin >> c ;
      R=0;

      if(n/1000000==c)  //����Ĥ@�� 
        R++;  
      if ((n%1000000)/100000==c)  //����ĤG�� 
        R++; 
      if ((n%100000)/10000==c)  //����ĤT�� 
        R++; 
      if ((n%10000)/1000==c)  //�����4�� 
        R++; 
      if ((n%1000)/100==c)  //�����5�� 
        R++; 
	  if ((n%100)/10==c)  //�����6�� 
        R++;  
      if ((n%10)==c)  //�����7�� 
        R++;    
        
     cout << "Result:" <<R; 
  
  return 0;
}
