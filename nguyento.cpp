#include <iostream> 
using namespace std;
int main()
{ 
int a;
int dem=0;
cout<<"nhap so a"<< endl;
cin>>a;
for (int i =1; i <= a; i++)
{
   if(a%i==0)
   {
       dem++;
   }
   
}
if (dem==2)
{
    cout<<"a la so nguyen to"<<endl;
}
else
{
cout<< " a khong la so nguyen to"<<endl;
}






return 0;
}