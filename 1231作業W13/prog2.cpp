#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main(){
	string str,sample;
	int a=0,b=0,c=0;
	
	cout << "Input:";
	
	getline(cin,str);
	
	
	for(int i=0;i<str.length();i++){
		str[i]=tolower(str[i]);//���������p�g 
		
			}
	for(int i=0;i<str.length();i++){
		if(str[i]<'a' && str[i]!=' '&& str[i]!='.' ||  str[i]>'z' && str[i]!=' ' && str[i]!='.'){
			str[i]=0;//�L�o�D�^�媺�Ÿ� 
			
		}
		
		if(str[i]!=0){	
		    //cout << str[i];
			if(str[i]==' ' || str[i]=='.' ){
			//	cout <<  endl;
				a++;			
			}
			
		}//��ťխp���r�� 
	
	}		
	string str1[a+1],str2[a+1];
	
	for(int i=0;i<str.length();i++){
		
		if(str[i]!=0){
			if(str[i]!='.' && str[i]!=' ')
				sample.push_back(str[i]);
	
		    if(str[i]==' ' || str[i]=='.'){
				
				str1[b]=sample;	
					sample="";
					b++;
			}			
			  
		}	
	}	
	b=b-1;
	
	for(int i = 0; i <= b; i++){
        str2[i]=str1[i];
	}//2�Q�� 
	
	
	for(int i=0;i<=b;i++){
		for(int j=0;j<=b;j++){
			
			if(str1[i]==str2[j]){
			    c++;      
			    str2[j]="";
			} 
		}
		if(c!=0){
			cout << str1[i]<<" "<< c<< endl;
		}
		
		  c=0;
	}	
			
		
	return 0;

}
