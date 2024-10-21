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
		n=a; //a找到的數字給n繼續算 
		c=b; //先把b存的數字給c 
		b=a; //再把新算的a存進b
		 
	    cout << a<< " ";
	    //bc一樣表示兩次重複就break出去 
	    
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

