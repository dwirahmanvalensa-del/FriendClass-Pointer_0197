#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;

class LayangLayang
{
private:
    double s1, s2, d1, d2;

public:
    void inputData()
    {
        cout << "Input Layang-Layang" << endl;
        cout << "Masukkan sisi 1     : ";
        cin >> s1;
        cout << "Masukkan sisi 2     : ";
        cin >> s2;
        cout << "Masukkan diagonal 1 : ";
        cin >> d1;
        cout << "Masukkan diagonal 2 : ";
        cin >> d2;
    }

    double hitungLuas()
    {
        return 0.5 * d1 * d2;
    }

    friend void tampilkanKeliling(LayangLayang, BelahKetupat);
    friend class BelahKetupat;
};

class BelahKetupat
{
private:
    double s, d1, d2;

public:
    void inputData()
    {
        cout << "\nInput Belah Ketupat" << endl;
        cout << "Masukkan sisi 1     : ";
        cin >> s;
        cout << "Masukkan diagonal 1 : ";
        cin >> d1;
        cout << "Masukkan diagonal 2 : ";
        cin >> d2;
    }

  double hitungLuas()
    {
        return 0.5 * d1 * d2;
    }

   double hitungKeliling()
    {
        return 4 * s;
    }

    friend void tampilkanKeliling(LayangLayang, BelahKetupat);
};

void tampilkanKeliling(LayangLayang ObjectLayang, BelahKetupat ObjectBelahKetupat)
{
    double kelilingLayang = 2 * (ObjectLayang.s1 + ObjectLayang.s2);
    double kelilingBelah = 4 * ObjectBelahKetupat.s;

    cout << "\n==== Hasil Keliling ====" << endl;
    cout << "Keliling Layang-Layang : " << kelilingLayang << endl;
    cout << "Keliling Belah Ketupat : " << kelilingBelah << endl;
}

int main()
{
    LayangLayang ObjectLayang;
    BelahKetupat ObjectBelahKetupat;

    
      