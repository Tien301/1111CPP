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
		
	
	    a=n/2;//a�����u���k�������Ʀr
	  	b=n%2;//b�����u���k���l��
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
				j++; //�D�n�Dj 
			}
			
		for (int i=1 ; k>=i ; i++){  //c�����{�b�O�ĴX��ơAi�p��w�g���F�X��10
				a = a*10;
			}
		sum=sum+a; //����X��ܦ��G�T�� 
		k++;
				
	}*/
	
}
