#include <iostream>
using namespace std;

int main(){
	int ngay;
	int thang;
	int nam;

	int check;
		cout << " nhap ngay thang nam sinh ";
	do{
		cin >> ngay >> thang >> nam;
		if (ngay == 3 && thang == 9 && nam ==2003)
        {
			cout << "nhap dung roi";
			check = 1;
		}
         else 
        {
			cout << "Sai roi nhap lai ";
            check=0;
		}
	}
    while(check == 0);
    return 0;
}