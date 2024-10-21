#include<iostream>
#include<cstdlib>
using namespace std;
int n,reverse=0, rem,a,i=1,p,tem; 

int palindrome(int p); //回文判斷用 
int rever(int n); //數字反轉用 

int main(void){
	
	cout <<"Input:";
	cin >> n;
	cout << "Result:";
	while(1){
		
		rever(n);
		a=rever(n);
		p=n+a;
		palindrome(p);
		
		if(palindrome(p)==4){ 
			cout << i << " " << p<< endl;
			break; 
		} 
		else if(palindrome(p)==3){
			n=p;
			i=i+1;
		}
	}
		
	i=1;
	cout <<"Input:";
	cin >> n;
	cout << "Result:";
	while(1){
		
		rever(n);
		a=rever(n);
		p=n+a;
		palindrome(p);
		
		if(palindrome(p)==4){ 
			cout << i << " " << p;
			break; 
		} 
		else if(palindrome(p)==3){
			n=p;
			i=i+1;
		}
	}	
	return 0;
}


int rever( int n){
	reverse=0;
	
	 while(n!=0)    
  {    
     rem=n%10;      
     reverse=reverse*10+rem;    
     n/=10;    
  }    
  n=reverse;
  reverse=0;
  return n;
}

int palindrome(int p){
	
	reverse=0;
	tem=p;
	while(p!=0)    
  	{    
  	   rem=p%10;      
  	   reverse=reverse*10+rem;    
  	   p/=10;    
 	}    
	p=reverse;
	reverse=0;
	
	if(p==tem)
	  return 4;
	else 
	  return 3;  
}
