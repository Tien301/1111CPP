#include <iostream>
#include<cstdlib>

using namespace std;

int main(void)
{ 
   int a,b,c ,A,B,C;
  
   cout << "Integer1:" ;
   cin >> a;
   
   A=(a/100)*(a/100)*(a/100)+((a%100)/10)*((a%100)/10)*((a%100)/10)+ ((a%100)%10)*((a%100)%10)*((a%100)%10); 
  
	 if (a==A)
      cout << "Yes"<< endl;
  
   cout << "Integer2:" ;
   cin >> b;
   
   B=(b/100)*(b/100)*(b/100)+(b%100/10)*(b%100/10)*(b%100/10)+ (b%100%10)*(b%100%10)*(b%100%10) ;
     if (b==B)
      cout << "Yes"<< endl;
      
      
   cout << "Integer3:" ;
   cin >> c;
   
   C=(c/100)*(c/100)*(c/100)+(c%100/10)*(c%100/10)*(c%100/10)+ (c%100%10)*(c%100%10)*(c%100%10) ;
     if (c==C)
      cout << "Yes";
  return 0;
}
