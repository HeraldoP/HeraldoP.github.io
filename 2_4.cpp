#include <iostream>
#include <math.h>
using namespace std;
//��1��n��ż����x��y��Ϊ��������n,x,y����ֵ
int n=2;    
int x=2;
int y=2;  //n��ż����x��y��Ϊ����
int q=0;
int sushu(int a){   //ȷ��a�Ƿ�Ϊ����
	int k=1;
	if(a!=2){
      for(int i=2;i<a;i++){
		 if(a%i==0)
          k=0;	  	
	  } 
	 }
	else 
		 k=1;
	 return k;
}
//��2��Ѱ������x,y��ʹ��ż��n=x+y��
int main(){
for (n=4;n<=100;n=n+2){
//��2.1���ҵ���2~n֮������������Ե���ϣ�
    q=0;
	for(x=2;x<n;x++){
		if(sushu(x)==1){
         for(y=2;y<n;y++){
			if(sushu(y)==1){
               //��2.2���ж�x+y�Ƿ����n ����������
				if(x+y==n && q==0) {
                     //��3����Ҫ��������
		         cout<<n<<'='<<x<<'+'<<y<<endl; 
				 q=1; }
			}
		}  
		}
	}	
}
}
