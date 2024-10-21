#include<iostream>
#include<cstdlib>
using namespace std;
int main (void)
{
	int n,i=0,min,mini;
	int number[5];
	
	while(i<5){		
		cout << "Integer"<< i+1<< ":";
		cin >> n;	
		if(n<10 && n>0){
			number[i]=n;
		//	cout << "number"<<i<<"="<< 	number[i];		
		}
		else
			i=i-1;
				 
		i++; 	
	}
	
	cout <<  "Array:";
	for(i=0;i<5;i++){
		cout << number[i]<< " ";
	}
	
	cout << endl<< "Reverse:";
	for(i=4;i>=0;i--){
		cout << number[i]<< " ";
	}
	cout << endl << "Arrayeven:";
	for(i=0;i<5;i++){
		if(number[i]%2==0  && number[i]!=0)
		cout << number[i]<< " ";
	}
	cout << endl << "Arraysame:";
	for(i=0;i<5;i++){
		if(number[i]==i)
		cout << number[i]<< " ";
	}
	
	min=number[0];
	
	cout << endl << "Min:";
	for(i=0;i<5;i++){
		if(number[i]<min){
		min=number[i];
		mini=i;	
		}
	}cout << mini;
	
	return 0;
}
