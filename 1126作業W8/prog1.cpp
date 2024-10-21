#include<iostream>
#include<cstdlib>

using namespace std;



int checkpassword (int n);


int n,p1,p2,a=0;

int main(void){
	
	
	cout <<"Password1:";
	cin >> p1;
	cout <<"Password2:";
	cin >> p2;
	
	cout << "Test1:"<< endl;
	
	while(true){
		
		cout << "Input:";
		cin >> n;
	    checkpassword(n);
	    
	    if(checkpassword(n)==4)
	       cout << "Wrong Digits"<< endl;   //work 
	    if(checkpassword(n)==2){
	       cout<< "Welcome!!!";
	       break;
		   }         // work
		   
	    if(checkpassword(n)==3){  
		    a=a+1;
		}
		if(a==3){
			cout << "Wrong Password!!!"; 
	      	break;
		}
		     
		   
	}
	 a=0;
	 
	
	cout << endl <<"Test2:"<< endl;
	
	while(true){
		
		cout << "Input:";
		cin >> n;
	    checkpassword(n);
	    
	    if(checkpassword(n)==4)
	       cout << "Wrong Digits"<< endl;   //work 
	    if(checkpassword(n)==2){
	       cout<< "Welcome!!!";
	       break;
		   }         // work
		   
	    if(checkpassword(n)==3){  
		    a=a+1;
		}
		if(a==3){
		
			cout << "Wrong Password!!!"; 
	      	break;
			}
		     
		   
	} 
	return 0;
}

int checkpassword (int n){
	if(n<100000 || n >1000000 ) 
		return 4;		
	
	if (n>100000 && n<1000000 ){
        if(n==p1 || n==p2)
			return 2;		
			
		if(n!= p1 || n!= p2)
			return 3;
	}
}




