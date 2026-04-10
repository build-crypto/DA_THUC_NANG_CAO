#include "DaThuc.h"
#include "DonThuc.h"
#include <iostream>
#include <cmath>


std::istream& operator >> (std::istream &is , DaThuc &A)
{
    A.Set_DaThuc(is);
    return is;
}
std::ostream& operator<< (std::ostream &os ,const DaThuc& A)
{
    A.Get_DaThuc(os);
    return os;
}
DaThuc operator+ (DaThuc A,DaThuc B)
{
    int max_grade = std::max(A.N,B.N);
    DaThuc C(max_grade-1);
    for (int t=0;t < C.N;t++)
    {
        int a = (t >= C.N - A.N)? A.DS[t-(C.N - A.N)].Get_iSo() : 0 ;
        int b = (t >= C.N - B.N)? B.DS[t-(C.N - B.N)].Get_iSo() : 0 ;

        C.DS[t].Set_DonThuc(a+b,C.N-t-1) ;
    }
    return C;
}
DaThuc operator- (DaThuc A,DaThuc B)
{
    int max_grade = std::max(A.N,B.N);
    DaThuc C(max_grade-1);
    for (int t=0;t < C.N;t++)
    {
        int a = (t >= C.N - A.N)? A.DS[t-(C.N - A.N)].Get_iSo() : 0 ;
        int b = (t >= C.N - B.N)? B.DS[t-(C.N - B.N)].Get_iSo() : 0 ;

        C.DS[t].Set_DonThuc(a-b,C.N-t-1) ;
    }
    return C;
}
void DaThuc::Set_DaThuc (std::istream &is)
{
    int y;
    for (int t=0;t<N;t++)
    {
        std::cout<<"Nhap Co So cua Don Thuc mu: "<<N-t-1<<std::endl;
        is>>y;
        DS[t].Set_DonThuc(y,N-t-1);
    }
}
void DaThuc::Get_DaThuc (std::ostream &os) const
{
    int check=0;
    for (int t=0;t<N;t++)
    {

        if (DS[t].iSo>0&&check!=0)
        {
            os<<"+";
        }
        if (DS[t].iSo!=0)
        {
            DS[t].Get_DonThuc(os);
            check++;
        }

    }
}
long long DaThuc::CAl_X(int X)
{
    long long Sum=0;
    for (int t=0;t<N;t++)
    {
         Sum = Sum * X + DS[t].iSo;
    }
    return Sum;
}
