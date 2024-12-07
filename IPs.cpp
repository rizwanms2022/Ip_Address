#include <iostream>
#include <bitset>
using namespace std;

void tobinary(int a)
{
    bitset<8> octet1(a);
    cout << octet1;
};

int main()
{
    int octet1, octet2, octet3, octet4;
    cout << "Enter First Octet:  ";
    cin >> octet1;
    cout << "Enter Second Octet:  ";
    cin >> octet2;
    cout << "Enter Third Octet:  ";
    cin >> octet3;
    cout << "Enter Fourth Octet:  ";
    cin >> octet4;

    cout << "IP: " << octet1 << "." << octet2 << "." << octet3 << "." << octet4 << endl;

    if (octet1 >= 0 && octet1 < 127)
    {
        cout << "Classs = A" << endl;
        cout << "Network ID = " << octet1 << ".0.0.0" << endl;
        cout << "Subnet Mask = 255.0.0.0" << endl;
        cout << "Subnet Mask = 255.0.0.0" << endl;
    }

    else if (octet1 >= 128 && octet1 < 192)
    {
        cout << "Classs = B" << endl;
        cout << "Network ID = " << octet1 << "." << octet2 << ".0.0" << endl;
        cout << "Subnet Mask = 255.255.0.0" << endl;
    }
    else if (octet1 >= 192 && octet1 < 224)
    {
        cout << "Classs = C" << endl;
        cout << "Network ID = " << octet1 << "." << octet2 << "." << octet3 << ".0" << endl;
        cout << "Subnet Mask = 255.255.255.0" << endl;
    }
    else
    {
        cout << "Please Enter Class A,B,C IPs Only." << endl;
    }

    cout << "Binary: ";
    tobinary(octet1);
    tobinary(octet2);
    tobinary(octet3);
    tobinary(octet4);

    return 0;
}