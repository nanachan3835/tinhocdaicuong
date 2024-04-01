#include <iostream>

using namespace std;

int main()
{
    const double PI{ 3.14159 };
    double bankinhday{0},chieucao{0};
    cout<<"NHAP BAN KINH DAY VA CHIEU CAO: "<<endl;
    cin>>bankinhday>>chieucao;
    cout<<"DIEN TICH BE MAT HINH TRU LA: "<<2*bankinhday*PI*chieucao<<endl;
    cout<<"THE TICH HINH TRU LA: "<<PI*bankinhday*bankinhday*chieucao<<endl;
    return 0;
}
