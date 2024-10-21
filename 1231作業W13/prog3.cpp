#include <iostream>
#include <cstdlib>
using namespace std;

void Count(int k);

int main(void)
{
	
	//讓使用者輸入一個整數 k ，程式則計算出包含 k 的 prime gap 的長度，並輸出其結果. 
    int k,a=0,b=0,c=0,count=0;
    
    cout<<"k:";
	cin>>k;
	Count(k);
    cout<<"k:";
	cin>>k;
	Count(k);
    

return 0;
}


void Count(int k){
	
	int a=0,b=0,c=0,count=0;
	for(int i=1;i<=k;i++){
        if(k%i==0){
           count++;
        }
    } 	
 	
 	if(count==2){  //質數判斷
        cout<<"Result:0"<<endl; 
    }
    
	else{  
    	for(int i=2;i<k;i++){  
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
		
		
		for(int i=k;i++;){  //迴圈一直視為true  
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
	

	  	cout << "Result:" << c-b << endl; 
    }
    
	a=0;
	b=0;
	c=0;	
}
