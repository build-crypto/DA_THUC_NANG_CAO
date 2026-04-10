#include "DonThuc.h"
#include <iostream>


DonThuc operator+(DonThuc A, DonThuc B)
{
    A.iSo+=B.iSo;
    return A;
}
DonThuc operator-(DonThuc A, DonThuc B)
{
    A.iSo-=B.iSo;
    return A;
}
void DonThuc::Set_DonThuc(int s,int m)
{
    iSo=s;
    iMu=m;
}
void DonThuc::Get_DonThuc(std::ostream &os) const
{
    if (iSo==0)
    {
        os<<0;
        return;
    }
    else if (iMu==0)
    {
        os<<iSo;
        return;
    }
    else if (iSo==1)
    {
        if (iMu!=1)
        {
            os<<"x^"<<iMu;
            return;
        }
        else os<<"x";
    }
    else if (iMu==1) os<<iSo<<"x";
    else os<<iSo<<"x^"<<iMu;
    return;
}
