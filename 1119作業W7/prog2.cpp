#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	
	//���ϥΪ̿�J�@�Ӿ�� N (1< N < 1000�AN ���D���)�A�{���h���̱��� N ����ơA�æL�X���G�C�Y����Ӥ@�˪񪺽�ơA�h�L�X���p����ơC
    int n,a=0,b=0,c=0;
    
	cout<<"N:";
	cin>>n;
	
	for(int i=2;i<n;i++){  
		for(int j=1;j<=i;j++){  //�q1�}�l�� 
			if(i%j==0){
				a++;  //a��p�ƾ� 
			}	
	    }
	    if(a<3){  
			b=i; //b�s�p��n����� 
		}
		a=0;
	} 
	
	
	for(int i=n;i++;){  //�j��@������true  
		for(int j=1;j<=i;j++){
			if(i%j==0){
				a++;
			}
		}
		if(a<3){
			c=i; //c�s�j��n����� 
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
		for(int j=1;j<=i;j++){  //�q1�}�l�� 
			if(i%j==0){
				a++;  //a��p�ƾ� 
			}	
	    }
	    if(a<3){  
			b=i; //b�s�p��n����� 
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
			c=i; //c�s�j��n����� 
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
	
	
	
	
