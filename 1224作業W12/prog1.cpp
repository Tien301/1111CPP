#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
using namespace std;

/*�n��X�̾a�� N �������_�� K�A
�]���n�u�̾a�� N�v�G�q����ƶ}�l�ˬd�A�J�참�ƦA�B�z�C
K �� N �j�G��Ĥ@�ӹJ�쪺���ƥ[ 1�A�����ƥ������� 1 (�̤p���_��)�C
K �� N �p�G��Ĥ@�ӹJ�쪺���ƴ� 1�A�����ƥ������� 9 (�̤j���_��)�C
�p�G�Ĥ@�ӹJ�쪺���ƬO 0�A�ݭn�@���ɦ�A�q�󰪪���ƴ� 2 (�O����_�ƪ��A)�C
*/

long long find_next(char nstr[],int even,int len);
long long find_pre(char nstr[],int even,int len);

int main(){
	int i,len,x=2;
	char n[20];
	long long n_next,n_pre,n_num,dif;
	while(x!=0){
		cout<<"N:";
		scanf("%s",n);
		n_num=atoll(n);
		len=strlen(n);
		for(i=0;i<len;i++){
			if(n[i]%2==0)
			break;
		}
		if(i==len && x==2){
			cout << "Result:0\n";
			x--;
			continue;
		}
		else if(i==len && x==1){
			cout << "Result:0\n";
			return 0;
		}
		n_next=find_next(n,i,len);
		n_pre=find_pre(n,i,len);
		dif=n_next-n_num;
		if(n_num-n_pre<dif)
			dif=n_num-n_pre;
		if(x==2)
			printf("Result:%lld\n",dif);
		else if(x==1)
			printf("Result:%lld",dif);
		x--;
	}
	
	return 0;
}

long long find_next(char nstr[],int even,int len){
	char temp[20];
	strcpy(temp,nstr);
	temp[even]++;
	while(++even<len)
		temp[even]= '1';
	return atoll(temp);
}

long long find_pre(char nstr[],int even,int len){
	char temp[20];
	int i,j;
	strcpy(temp,nstr);
	temp[even]--;
	for(i=even+1;i<len;i++)
		temp[i]='9';
	while(even>0 && temp[even]<'0'){
		temp[even]='9';
		even--;
		temp[even]-=2;
	}
	if(temp[even]<'0') temp[even]='0';
	return atoll(temp);
}
