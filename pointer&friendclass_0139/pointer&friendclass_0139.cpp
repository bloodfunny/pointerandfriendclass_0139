#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void ShowNim() {
        cout << "No induk = " << nim << endl;
    }
};

int main() {
    mahasiswa mhs{ 1 };
    mhs.ShowNim();

    mahasiswa& refmhs = mhs;
    refmhs.nim = 2;
    mhs.ShowNim();

    mahasiswa* pMhs = &mhs;
    pMhs->nim = 1;
    mhs.ShowNim();
    return 0;
}

