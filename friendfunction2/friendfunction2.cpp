#include <iostream>

class pelajar;
class manusia
{
public:
    void showNilaipelajar(pelajar& a);

};

class pelajar
{
private:
    int nilai;

public:
    pelajar() { nilai = 100; }
    friend void manusia::showNilaipelajar(pelajar& a);
};

