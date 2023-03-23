#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int &b = a;

    cout << " Nilai dari a: " << a << endl;
    cout << "Alamat dari a: " << &a << endl << endl;

    cout << " Nilai dari b: " << b << endl;
    cout << "Alamat dari b: " << &b << endl << endl;

    b = 11;
    
    cout << " Nilai dari a: " << a << endl;
    cout << " Nilai dari b: " << b << endl << endl;

    a = 14;
    
    cout << " Nilai dari a: " << a << endl;
    cout << " Nilai dari b: " << b << endl << endl;
    
    return 0;
}