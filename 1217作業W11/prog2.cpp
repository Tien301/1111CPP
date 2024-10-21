#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int n;
    
    cout << "n:";
    cin >> n;
    int P[n],T[n];
    
    
    cout << "Peter" << endl;
	for(int i=0;i<n;i++){
   		cout << "Input:";
   		cin >> P[i];
	   }
	cout << "Tom" << endl;
	for(int i=0;i<n;i++){
   		cout << "Input:";
   		cin >> T[i];
	   }
	   
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (P[i]==T[j]){
				P[i]=0;
				T[j]=0;
			}
		}
	}   
	cout <<  "Peter:" ;
	for(int i=0;i<n;i++){
		if(P[i]!=0)
			cout << P[i] << " ";		
	} 
	cout <<endl<<  "Tom:" ;
	for(int i=0;i<n;i++){
		if(T[i]!=0)
		cout << T[i]<< " ";		
	}    
	return 0;
} 
