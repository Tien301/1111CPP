#include <iostream>  
#include <cstdlib>

using namespace std;  

int Ackmermann (int n , int m);

int main()  
{  
     int n,m;
     
     cout << "n:";
     cin >> n;
     cout << "m:";
     cin >> m;
     
     cout << "Result:"<<  Ackmermann(n,m);
  return 0;  
}


int Ackmermann (int n , int m)
{
    if (n == 0)
        return m + 1;
        
    else if (m == 0)
        return Ackmermann(n-1, 1);
        
    else
        return Ackmermann(n-1, Ackmermann(n, m-1));
}

