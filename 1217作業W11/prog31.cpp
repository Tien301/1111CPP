#include <iostream> 
#include <cstdlib>
using namespace std;
int main(){
	int n,m=1,c,b=0,x=1;
	int a[500000];
	while(m!=3){
		
		cout<<"Test"<<m<<endl;
		cout<<"N:";
		cin>>n;
		for(int i=0;i<n;i++){
			a[i]=i+1;
		}
		c=n;
		cout<<"Result:";	
		while(c!=1){
			for(int j=0;j<n;j++){
				if(a[j]==0)
					continue;
					
				if(x==1){
					a[j]=0;
					x=x+1;
				}
				else if(x==2){
					b++;
					x=x-1;
				}
			}
			c=c-b;
			b=0;
		}
		if(c==1 && m==1){
			for(int k=0;k<n;k++){
				if(a[k]!=0){
					cout<<a[k]<<endl;
					break;
				}
			}
		}
		else if(c==1 && m==2){
			for(int k=0;k<n;k++){
				if(a[k]!=0){
					cout<<a[k];
					break;
				}
			}
		}
		m++;
	}
	
	return 0;
}
