#include <iostream>
#include <math.h>
using namespace std;
int x,y;    //xΪ����ʹ�ó�Ʊ��������yΪ�ۻ�Ա�ҳ���Ʊ������
int main(){                              
//��1����x��y����ֵ
 x=10;
 y=1;
//��2��Ѱ�ҷ���ʹ19=2*x-5*y
  //��2.1��Ѱ��ʹ19=2*x-5*y��������С��x��
for(x=10;x<50;x++)
  {
   //��2.2��Ѱ��ʹ19=2*x-5*y��������С��x��
  for(y=1;y<50;y++)
      if (2*x-5*y==19) break;
    if (2*x-5*y==19)  break;
 }
//��3����ӡ�����
 cout<<"�˿͸�";
 cout<<x;
 cout<<"��2Ԫ��Ʊ"<<endl;
 cout<<"�ۻ�Ա��";
 cout<<y;
 cout<<"��5Ԫ��Ʊ"<<endl;
}
