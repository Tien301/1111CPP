#include <iostream>
#include <cstdlib>
using namespace std;

int n,A,N,a=0,b=0;

void check(int N);

int main(){
	
	
	cout<<"Ans:";
	cin>> A;
	cout<<"n:"; //�i�q������ 
	cin>> N;
	check(N);
	
	return 0;
} 

void check(int N){
	
	for(int i=0;i<N ;i++){
		
		cout<<"Input:";
		cin>> n;
		if(n/1000 == A/1000) //�d�� 
		 a++;	
		if(n%1000/100 == A%1000/100) //�ʦ� 
		 a++;
		if(n%100/10 == A%100/10) //�Q�� 
		 a++; 
		if(n%10 == A%10) //�Ӧ� 
		 a++; 
		 
		 
		 if (n/1000==A%1000/100 || n/1000==A%100/10 || n/1000==A%10)
		 b++; 
		 if (n%1000/100==A/1000 || n%1000/100==A%100/10 || n%1000/100==A%10) 
		 b++;
		 if (n%100/10==A%1000/100 || n%100/10==A/1000 || n%100/10==A%10)
		 b++;
		 if (n%10==A%1000/100 || n%10==A%100/10 || n%10==A/1000)
		 b++; 
		
		cout << a << "A"<< b<< "B" << endl ;
		a=0;
		b=0;
	}
	
}
