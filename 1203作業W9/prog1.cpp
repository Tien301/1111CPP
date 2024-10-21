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
		for(int j=1;j<=i;j++){  //i來檢查j是否是植樹 
			if(i%j==0){
				c++; //c計數器檢查整除次數 
			}
			   
		}
		while(c<3 && n%i==0){  //i再來給 n除看可被除幾次 
			n=n/i;
			a++; //紀錄次方 
		}
		c=0;
		if(a!=0){
			cout<<i<<" "<<a<<" ";
		}
		a=0;
	}
}
