#include<iostream>
#include<cstdlib>
using namespace std;
//����ƸӼƥѫ�n��Ӭ۲����u���Ʀr�v�զ��z�A
//�ҥH�Ʀr�զ����Φ��A�_�Ʀ�Ƭ� xyxy...xyx�A���Ʀ�Ƭ� xyxy...xy�A�䤤 x != y 
int main (void)
{   char N,N1;
	int j;
	
	for(int k=0;k<3;k++){
	
		char number[8];//���׬�8 
		cout <<"Test" << k+1<< endl;
		cout << "Input:";
		cin >> number;
	
	
	
		for(int i=0;i<8;i++){
			N=number[0]; //�Ĥ@�Ӧr�h��� 
			N1=number[1];
			if(number[i]==number[i+1] ){  //�ӼƩҧt�����Ʀr�A���w���|�s��X�{�C
				cout << "No" << endl;
				break;
			}	
		
			if(number[i+2]==N && number[i+1]==N1){
				cout << "Yes"<< endl; ;
				break;
			}
		}	
		
	}
	return 0;
}
	

