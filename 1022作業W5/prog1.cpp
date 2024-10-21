#include <iostream>
#include<cstdlib>

using namespace std;

int main(void)
{ 
  int e1,e2,e3;
 
  for(int i=1;i<4;i++){
  
  cout<< "Triangle"<< i<< endl;
  
  cout << "Edge1:" ;
  cin >> e1;
  cout << "Edge2:" ;
  cin >> e2;
  cout << "Edge3:" ;
  cin >> e3;
  
  if( (e1+e2)>e3  && (e2+e3)>e1 && (e3+e1)>e2){
  	
  	if ( (e1*e1)+(e2*e2)<(e3*e3) || (e3*e3)+(e2*e2)<(e1*e1) || (e3*e3)+(e1*e1)<(e2*e2)  )
  	  cout <<"Result:1"<< endl;  //¶w¨¤¤T¨¤
  	  
    else if ( (e1*e1)+(e2*e2)==(e3*e3) || (e3*e3)+(e2*e2)==(e1*e1) || (e3*e3)+(e1*e1)==(e2*e2)  )
  	  cout <<"Result:3"<< endl;// ª½¨¤¤T¨¤
  	  
	else if ( (e1*e1)+(e2*e2)>(e3*e3) || (e3*e3)+(e2*e2)>(e1*e1) || (e3*e3)+(e1*e1)>(e2*e2)  )
  	  cout <<"Result:2"<< endl;	//·ç   
  	
  }
  else
    cout << "Result:0"<< endl;
  }
   
   
   cout<< "Triangle4"<< endl;
  
  cout << "Edge1:" ;
  cin >> e1;
  cout << "Edge2:" ;
  cin >> e2;
  cout << "Edge3:" ;
  cin >> e3;
  
  if( (e1+e2)>e3  && (e2+e3)>e1 && (e3+e1)>e2){
  	
  	if ( (e1*e1)+(e2*e2)<(e3*e3) || (e3*e3)+(e2*e2)<(e1*e1) || (e3*e3)+(e1*e1)<(e2*e2)  )
  	  cout <<"Result:1";  //¶w¨¤¤T¨¤
  	  
    else if ( (e1*e1)+(e2*e2)==(e3*e3) || (e3*e3)+(e2*e2)==(e1*e1) || (e3*e3)+(e1*e1)==(e2*e2)  )
  	  cout <<"Result:3";// ª½¨¤¤T¨¤
  	  
	else if ( (e1*e1)+(e2*e2)>(e3*e3) || (e3*e3)+(e2*e2)>(e1*e1) || (e3*e3)+(e1*e1)>(e2*e2)  )
  	  cout <<"Result:2";	//·ç   
  	
  }
  else
    cout << "Result:0";
  return 0;
}
