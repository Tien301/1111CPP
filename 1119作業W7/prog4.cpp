#include<iostream>
#include<cstdlib>

using namespace std;

int main(void){
	
	int n,n1=0,n2=0,n3=0,a=0,b=0;
	
	

		
	

for(int i=0;i<5;i++){

    cout << "Integer:";
	cin >> n;
	n1=n;
	n2=((n1/100)*(n1/100))+((n1%100/10)*(n1%100/10))+((n1%100%10)*(n1%100%10));//可能從地2個數循環 
	n3=((n2/100)*(n2/100))+((n2%100/10)*(n2%100/10))+((n2%100%10)*(n2%100%10));//可能從地3個數循環 
	do{
		
		
		a=((n1/100)*(n1/100))+((n1%100/10)*(n1%100/10))+((n1%100%10)*(n1%100%10));
		
		
		
		if(a==1)
		{
			cout << "Happy" << endl;
			break;
		}
		if(a==n|| a==37)
		{
			cout << "Unhappy"<< endl;
			break;
		}
		n1=a;
	
		//cout << n1<< endl;
		//以下第二個 
		
		b=((n1/100)*(n1/100))+((n1%100/10)*(n1%100/10))+((n1%100%10)*(n1%100%10));
		
		
		
		if(b==1)
		{
			cout << "Happy"<< endl;
			break;
		}
		if(b==n || b==n2 || b==37)
		{
			cout << "Unhappy"<< endl;
			break;
		}
		n1=b;
	
	//	cout << n1<< endl;
	}while( a!=1 && b!= 1 );
     // n!= b || n!=a || n2!=b
}
cout << "Integer:";
	cin >> n;
	n1=n;
	n2=((n1/100)*(n1/100))+((n1%100/10)*(n1%100/10))+((n1%100%10)*(n1%100%10));//可能從地2個數循環 
	
	do{
		
		
		a=((n1/100)*(n1/100))+((n1%100/10)*(n1%100/10))+((n1%100%10)*(n1%100%10));
		
		
		
		if(a==1)
		{
			cout << "Happy" ;
			break;
		}
		 if(a==n|| a==37)
		{
			cout << "Unhappy";
			break;
		}
		n1=a;
	
		//以下第二個 
		
		b=((n1/100)*(n1/100))+((n1%100/10)*(n1%100/10))+((n1%100%10)*(n1%100%10));
		
		
		
		if(b==1)
		{
			cout << "Happy";
			break;
		}
		if(b==n || b==n2 || b==37 )
		{
			cout << "Unhappy";
			break;
		}
	
		n1=b;
	
		
	}while(  n!= b || n!=a || n2!=b );
    

	return 0;
} 

