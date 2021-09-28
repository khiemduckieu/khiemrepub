#include <iostream>
using namespace std;
int main(){
int ngay;
int thang;
int nam;
int check; cout<<"Hay nhap ngay thang nam sinh cua quang:"<<endl;
do {
 cin>>ngay>>thang>>nam;
 if(ngay==6 && thang==8 && nam==2003)
{
  cout<<"Ban da nhap dung ngay sinh "<<endl;
  check=1;
}
else
{
cout<<"Ban da nhap sai roi !!!"<< endl;
cout<<"Vui long nhap lai: "<< endl;
check=0;

}


}
while(check==0);


  return 0;
}