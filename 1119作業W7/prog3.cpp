#include<iostream>
#include<cstdlib>

using namespace std;

int main(void){
	 
	int s=0,n,a,b=1,c;
    cout << "Integer:";
	cin >> n;
    cout << "Result:"<< n << " ";
	
	do{
	
		a=(n*n%1000-n*n%10)/10;
		n=a; //a��쪺�Ʀr��n�~��� 
		c=b; //����b�s���Ʀr��c 
		b=a; //�A��s�⪺a�s�ib
		 
	    cout << a<< " ";
	    //bc�@�˪�ܨ⦸���ƴNbreak�X�h 
	    
	}while( c!=b );  
	 
	 
	 cout <<endl;
	 
	 s=0;
	 a=0;
	 b=1;
	 c=0;
	 
	 
	cout << "Integer:";
	cin >> n;
    cout << "Result:"<< n << " ";
	
	do{
	
		a=(n*n%1000-n*n%10)/10;
		n=a; 
		c=b; 
		b=a; 
	    cout << a<< " ";
	    
	    
	}while( b!=c ); 
	
	return 0;
} 

