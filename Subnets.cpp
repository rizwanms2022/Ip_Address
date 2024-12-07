#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int octet1, octet2, octet3, octet4, cidr;
    cout << "Enter First Octet:  ";
    cin >> octet1;
    cout << "Enter Second Octet:  ";
    cin >> octet2;
    cout << "Enter Third Octet:  ";
    cin >> octet3;
    cout << "Enter Fourth Octet:  ";
    cin >> octet4;

    // Input CIDR notation
    cout << "Enter CIDR notation (e.g., 25 for /25): ";
    cin >> cidr;

    // Calculate subnet size and number of usable IPs
    int subnetSize = pow(2, (32 - cidr));
    int usableIPs = subnetSize - 2;
    int temp = subnetSize;
    cout << "\n\nTotal Subnets: " << 256 / subnetSize << endl;
    
    for (int i = 0; i < 256 / subnetSize; i++)
    {
        cout << "Subnet #" << i + 1 << endl;
        cout << "Network ID: " << octet1 << "." << octet2 << "." << octet3 << "." << temp - subnetSize << endl;
        cout << "Broadcast ID: " << octet1 << "." << octet2 << "." << octet3 << "." << temp - 1 << endl;
        cout << "Range: ";
        cout << octet1 << "." << octet2 << "." << octet3 << "." << (temp - subnetSize) + 1 << " - " << octet1 << "." << octet2 << "." << octet3 << "." << temp - 2 << "/" << cidr << endl;
        cout << "Usable IPs: " << subnetSize - 2;
        temp = temp + subnetSize;
        cout << endl;
        cout << endl;
    }

    return 0;
}
