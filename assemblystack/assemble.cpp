#include <iostream>
#include <string>
using namespace std;

float r, h, a, b, c, pi = 3.14, two = 2.0;
float csurface, cvolume, cubsurface, cubvolume, p1, p2, p3;

void Cdisplay()
{
cout << "Enter the values of radius and height ";
cin >> r >> h;
}

void Cubdisplay()
{
cout << "Enter the values of a, b,  and c ";
cin >> a >> b >> c;
}

int main()
{

_asm
{
call Cdisplay;
fld h;
fld r;
fmul;
fld pi;
fmul;
fld two;
fmul;
fstp csurface;
fld r;
fld r;
fmul;
fld pi;
fmul;
fld h;
fmul;
fstp cvolume;
}

cout << "Surface area = " << csurface << endl;
cout << "Volume = " << cvolume << endl;
_asm
{
call Cubdisplay;
fld c;
fld b;
fmul;
fld two;
fmul;
fstp p1;
fld c;
fld a;
fmul;
fld two;
fmul;
fstp p2;
fld b;
fld a;
fmul;
fld two;
fmul;
fstp p3;
fld p1;
fld p2;
fadd;
fld p3;
fadd;
fstp cubsurface;
fld c;
fld b;
fmul;
fld a;
fmul;
fstp cubvolume;
}
cout << "Surface area = " << cubsurface << endl;
cout << "Volume = " << cubvolume;
cout << endl;
system("pause");
return 0;
}
