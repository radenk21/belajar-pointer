// ini prgram untuk mengkuadratkan bilangan dengan menggunakan pointer
/* 
Jadi kegunaan pointer itu untuk menghemat memori, apabila ada sebuah variabel yang digunakan
hanya sekali, dan tidak akan digunakan lagi, lebih baik menggunakan sebuah pointer 
*/
#include <iostream>

using namespace std;

void cekPtr(int *);
void kuadrat(int *);

int main()
{
    int a = 5;

    cout << "alamat dari a: " << &a << endl;
    cout << " nilai dari a: " << a << endl << endl;

    cekPtr(&a);
    kuadrat(&a);
    cout << "nilai a setelah dikuadratkan " << a << endl;
    
    return 0;
}

void cekPtr(int *aPtr)
{
    cout << "alamat dari aPtr: " << aPtr << endl;
    cout << " nilai dari aPtr: " << *aPtr << endl << endl;
}

void kuadrat(int *aPtr)
{
    *aPtr *= *aPtr;
}