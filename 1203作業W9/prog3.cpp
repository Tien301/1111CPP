#include <iostream>
#include <cstdlib>
using namespace std;

int n,a,b,c,sum=0,j=0,d;

void check(int n);

int main(){
	
	cout<<"Input:";
	cin>> n;
	cout<<"Result:"; //
	check(n);
	
	cout<<endl << "Input:";
	cin>> n;
	cout<<"Result:"; //
	check(n);
	return 0;
} 

void check(int n){

	
	do{
		
	
	    a=n/2;//a紀錄短除法除完的數字
	  	b=n%2;//b紀錄短除法的餘數
	  	n=a;
		if(b==1)
	 		c++;
	  
	    if(b==0){
	  		if(c!=0)
	  		d=c;
	  		c=0;
	    }
	   
	    if(d>c)
			cout<<d;
		else if(c>d)
			cout<<c;
			
		cout << endl;
		
		}while(a!=0);
		b=0;
		c=0;
		d=0;
	/*	if(c==b ){
				j++; //主要求j 
			}
			
		for (int i=1 ; k>=i ; i++){  //c紀錄現在是第幾位數，i計算已經乘了幾個10
				a = a*10;
			}
		sum=sum+a; //讓輸出顯示成二禁制 
		k++;
				
	}*/
	
}
