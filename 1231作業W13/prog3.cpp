#include <iostream>
#include <cstdlib>
using namespace std;

void Count(int k);

int main(void)
{
	
	//���ϥΪ̿�J�@�Ӿ�� k �A�{���h�p��X�]�t k �� prime gap �����סA�ÿ�X�䵲�G. 
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
 	
 	if(count==2){  //��ƧP�_
        cout<<"Result:0"<<endl; 
    }
    
	else{  
    	for(int i=2;i<k;i++){  
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
		
		
		for(int i=k;i++;){  //�j��@������true  
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
	

	  	cout << "Result:" << c-b << endl; 
    }
    
	a=0;
	b=0;
	c=0;	
}
