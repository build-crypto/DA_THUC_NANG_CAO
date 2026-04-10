#ifndef DATHUC_H
#define DATHUC_H
#include "DonThuc.h"
#include <vector>
#include <iostream>


class DaThuc
{
    public:
        DaThuc(int bac=0)
        {
            N=bac+1;
            DS.assign(N, DonThuc());
        };
        void Set_DaThuc (std::istream &is);
        void Get_DaThuc (std::ostream &os) const;
        long long CAl_X(int X);
        friend DaThuc operator+ (DaThuc A,DaThuc B);
        friend DaThuc operator- (DaThuc A,DaThuc B);
        friend std::istream& operator>> (std::istream &is , DaThuc &A);
        friend std::ostream& operator<< (std::ostream &os ,const DaThuc& A);
    protected:

    private:
        std::vector<DonThuc> DS;
        int N;
};

#endif // DATHUC_H
