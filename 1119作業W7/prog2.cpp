#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	
	//讓使用者輸入一個整數 N (1< N < 1000，N 為非質數)，程式則找到最接近 N 的質數，並印出結果。若有兩個一樣近的質數，則印出較小的質數。
    int n,a=0,b=0,c=0;
    
	cout<<"N:";
	cin>>n;
	
	for(int i=2;i<n;i++){  
		for(int j=1;j<=i;j++){  //從1開始找 
			if(i%j==0){
				a++;  //a當計數器 
			}	
	    }
	    if(a<3){  
			b=i; //b存小於n的質數 
		}
		a=0;
	} 
	
	
	for(int i=n;i++;){  //迴圈一直視為true  
		for(int j=1;j<=i;j++){
			if(i%j==0){
				a++;
			}
		}
		if(a<3){
			c=i; //c存大於n的質數 
			break;
		}
		a=0;
	}
	
	if(n-b  > c-n)
	  cout<< "Result:" << c<< endl; 
	else if(n-b  < c-n) 
	  cout<< "Result:" << b<< endl; 
	else 
	  cout << "Result:" << a << endl; 
	  
	a=0;
	b=0;
	c=0;
	
	 
	cout<<"N:";
	cin>>n;
	
	for(int i=2;i<n;i++){
		for(int j=1;j<=i;j++){  //從1開始找 
			if(i%j==0){
				a++;  //a當計數器 
			}	
	    }
	    if(a<3){  
			b=i; //b存小於n的質數 
		}
		a=0;
	} 
	
	
	for(int i=n;i++;){
		for(int j=1;j<=i;j++){
			if(i%j==0){
				a++;
			}
		}
		if(a<3){
			c=i; //c存大於n的質數 
			break;
		}
		a=0;
	}
	
	if(n-b  > c-n)
	  cout<< "Result:" << c;
	else if(n-b  < c-n) 
	  cout<< "Result:" << b;
	else 
	  cout << "Result:" << a;     
	return 0;
}
	
	
	
	
