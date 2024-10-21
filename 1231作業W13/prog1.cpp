#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main(){
	int N[50],n;
	
	for(int i=0;i<50;i++){
		N[i]=i+1;
	}
	
	while(true){
		cout << "n:";
		cin >> n;
		if(n==0){
			for(int i=0;i<50;i++){
				if(N[i]!=0){
				cout << N[i]<< " ";
			}
			}
			 break;
		}	
		for(int i=0;i<50;i++){
			if(N[i]%n==0){
			  N[i]=0;
			  }
			if(N[i]!=0){
				cout << N[i]<< " ";
			}
			
		}
		cout << endl;
	}
	
	return 0;

}
