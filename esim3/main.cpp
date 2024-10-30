#include <iostream>
#include "myfunctions.h"
using namespace std;
int main()
{
    int num;
    int result;
    cout << "Lasketaan kertoma!" << endl;
    cout << "Anna positiivinen luku" << endl;
    cin >> num;

    result=factorial(num);
    if (result==-1){
         cout << "Kertomaa ei voi laskea negatiiviselle luvulle" << endl;
    } else{
        cout << "Luvun " <<num<<" kertoma = "<<factorial(num)<<endl;
    }

    cout << "Anna n "<<endl;
    cin>>n;
    return 0;

}
