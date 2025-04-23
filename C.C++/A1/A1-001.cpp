#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, surname;

    // input
    cin>> name>> surname;

    // output
    cout<< "Hello "<< name<< " "<< surname<< "\n";
    cout<< name[0]<< name[1]<< surname[0]<< surname[1];

    return 0;
}
