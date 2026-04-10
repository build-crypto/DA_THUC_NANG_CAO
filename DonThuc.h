#ifndef DONTHUC_H
#define DONTHUC_H
#include <iostream>

class DonThuc
{
    public:
        DonThuc(int s=0,int m=0){iSo=s ; iMu = m;}
        void Set_DonThuc (int s,int m);
        void Get_DonThuc (std::ostream &os) const;
        friend DonThuc operator+(DonThuc A, DonThuc B);
        friend DonThuc operator-(DonThuc A, DonThuc B);
        int Get_iSo()
        {
            return iSo;
        }
    protected:

    private:
        int iSo,iMu;
        friend class DaThuc;
};

#endif // DONTHUC_H
