#include <iostream>

using namespace std;

int main()


{   int a;
    int b;
    int select;
    cout<<"hay nhap gia tri cua a:"<< endl;
    cin>>a;
    cout<<"hay nhap gia tri cua b:"<< endl;
    cin>>b;
    cout<<"hay chon cach tinh ma ban muon"<< endl;
    cout<<"1:tinh tong"<< endl;
    cout<<"2:tinh hieu"<< endl;
    cout<<"3:tinh tich"<< endl;
    cout<<"4:tinh thuong"<< endl;
    cout<<"nhap cach tinh o day"<< endl;
    cin>> select;
    switch(select){
case 1:
    cout<<"tong la:"<<a+b<< endl;
    break;
case 2:
    cout<<"hieu la:"<<a-b<< endl;
    break;
case 3:
    cout<<"tich la:"<< a*b<< endl;
    break;
case 4:
    cout<<"thuong la:"<< (float)a/b<< endl;
    break;





    }













    return 0;
}
