#include <iostream>
using namespace std;


int main(){
    //
    int a = 13, b = 16, c, x, y;

    c = a;
    a = b;
    b = c;


    cout << "Menukarkan variable dengan variable sementara" << endl;
    cout << "A: " << a << endl << "B: " << b << endl;


    //menukarkan dua variable tanpa variable sementara
    x = 4;
    y = 5;

    x = x+y; //9
    y = x-y; //4
    x = x-y; //5

    cout << "Menukarkan dua variable tanpa variable sementara\n";
    cout << "\nX: " << x << endl << "y: " << y << endl;
    return 0;

}
