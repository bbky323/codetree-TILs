#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;

    cin>>A;

    A.erase(A.find("e"), 1);

    cout<<A;
    return 0;
}