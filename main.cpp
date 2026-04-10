
#include "DaThuc.h"
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Nhap Bac cao nhat cua Da Thuc A: ";
    cin>>n;
    DaThuc A(n);
    cin>>A;
    cout<<A;
    cout<<"\nNhap Bac cao nhat cua Da Thuc B: ";
    cin>>n;
    DaThuc B(n);
    cin>>B;
    cout<<B;
    cout<<endl<<"Tong Hai Da Thuc A+B = ";
    cout<<A+B;
    cout<<endl<<"Hieu Hai Da Thuc A-B = ";
    cout<<A-B;
    cout<<"\nNhap X cho Da Thuc A: ";
    int X;
    cin>>X;
    cout<<A.CAl_X(X);
    return 0;
}
