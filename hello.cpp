#include <iostream>
using namespace std;
int main()
{
   int i; int b=0; int tong=0;
  cout<<"cac so chan la: "<< endl;
  for (i=0;i<22;i++)
  {
    if (i%2==0)
    {
       cout<<i<<endl;
       
       tong+=i;
       b++;
    }

  }
  cout<<"co "<< b << " so chia het cho 2 "<< endl;
  cout<< " tong cac so chia het cho 2 la: "<< tong <<endl;




  return 0;

}



