#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
using namespace std;

/*璶т程綼 N Ч计 K
璶程綼 N眖蔼计秨﹍浪琩笿案计矪瞶
K ゑ N р材笿案计 1尿计场传Θ 1 (程计)
K ゑ N р材笿案计搭 1尿计场传Θ 9 (程计)
狦材笿案计琌 0惠璶隔眖蔼计搭 2 (玂ㄤ计篈)
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
