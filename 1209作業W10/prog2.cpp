#include<iostream>
#include<cstdlib>
using namespace std;

int main (void)
{
	int n,i=0;
	int number[5]={11,12,13,14,15};
	
	while(i<5){		
		cout << "Integer"<< i+1<< ":";
		cin >> n;	
		if(n<11 && n>0){
			number[i]=n;
			//cout << "number"<<i<<"="<< 	number[i] << endl;
				
		    if(number[1]==number[0] ){
		   	cout << "Duplicate!"<< endl;
		   	i=i-1; //work
		   }
		   
		    else if(number[2]==number[0]  || number[2]==number[1]  ){
		   	cout << "Duplicate!"<< endl;
		   	i=i-1;
		   }
		   else if(number[3]==number[0]   || number[3]==number[1]|| number[3]==number[2]){
		   	cout << "Duplicate!"<< endl;
		   	i=i-1;
		   }  
		   else if(number[4]==number[0] || number[4]==number[1] ||number[4]==number[2] ||number[4]==number[3] ){
		   	cout << "Duplicate!"<< endl;
		   	i=i-1;
		   } 
		  
		    
		}
		else
			i=i-1;
		
		
		i++; 	
	}
	
	cout <<  "Result:";
	for(i=0;i<5;i++){
		cout << number[i]<< " ";
	}
	

	
	return 0;
}
	

