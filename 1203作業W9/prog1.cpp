#include <iostream>
#include <cstdlib>
using namespace std;

int n,a=0,b,c=0;

void insu(int n);

int main(){
	
	
	cout<<"Integer:";
	cin>>n;
	cout<<"Result:";
	insu(n);
	
	cout<<endl;
	cout<<"Integer:";
	cin>>n;
	cout<<"Result:";
	insu(n);
	return 0;
} 


void insu(int n){
	
	for(int i=2;i<=n;i++){  
		for(int j=1;j<=i;j++){  //i���ˬdj�O�_�O�Ӿ� 
			if(i%j==0){
				c++; //c�p�ƾ��ˬd�㰣���� 
			}
			   
		}
		while(c<3 && n%i==0){  //i�A�ӵ� n���ݥi�Q���X�� 
			n=n/i;
			a++; //�������� 
		}
		c=0;
		if(a!=0){
			cout<<i<<" "<<a<<" ";
		}
		a=0;
	}
}
