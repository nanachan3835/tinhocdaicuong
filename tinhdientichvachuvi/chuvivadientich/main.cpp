#include <iostream>

using namespace std;

int main()
{
    int chieudai{0},chieurong{0};
    cout<<"NHAP CHIEU DAI VA CHIEU RONG: "<<endl;
    cin>>chieudai>>chieurong;
    cout<<"DIEN TICH HINH CHU NHAT LA: "<<chieudai*chieurong<<endl;
    cout<<"CHU VI HINH CHU NHAT LA: "<<2*(chieudai+chieurong)<<endl;
    return 0;
}
