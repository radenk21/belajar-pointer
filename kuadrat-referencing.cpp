#include <iostream>

using namespace std;

void cekRef(int &);
void kuadrat(int&);

int main()
{
    int a = 5;
    cout << "alamat a: " << &a << endl;
    cout << " nilai a: " << a << endl;
    
    cekRef(a);
    kuadrat(a);
    
    cout << " nilai a setelah dikuadratkan: " << a << endl;
    return 0;
}

void cekRef(int &b)
{
    cout << "alamat b: " << &b << endl;
    cout << " nilai b: " << b << endl;
}

void kuadrat(int &refValue)
{
    refValue *= refValue;
}
