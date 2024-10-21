#include<iostream>
#include<cstdlib>
using namespace std;
//丁计赣计パㄢ钵虫计舱Θ
//┮计舱ΘΑ计计 xyxy...xyx案计计 xyxy...xyㄤい x != y 
int main (void)
{   char N,N1;
	int j;
	
	for(int k=0;k<3;k++){
	
		char number[8];//8 
		cout <<"Test" << k+1<< endl;
		cout << "Input:";
		cin >> number;
	
	
	
		for(int i=0;i<8;i++){
			N=number[0]; //材ゑ癸 
			N1=number[1];
			if(number[i]==number[i+1] ){  //赣计┮虫计ゲ﹚ぃ穦硈尿瞷
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
	

