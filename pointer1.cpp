#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    
    // // pointer
    // int *aPtr = &a;
    
    // pointer dengan nullptr
    int *aPtr = nullptr;    
    aPtr = &a;
    
    cout << "Nilai dari a: " << a << endl;
    cout << "Alamat dari a: " << &a << endl;

    cout << "Alamat dari pointer a: " << aPtr << endl;
    
    // dereferencing, mengambil/mengakses data atau nilai dari sebuah pointer, dengan menggunakan *
    cout << "Nilai dari pointer aPtr: " << *aPtr << endl;
    
    cin.get();
    return 0;
}