#include <iostream>
#include <string>

using namespace std;


int main() {
    string in;

    cin>>in;

    if(in == "char")
    cout<<sizeof(char);
    else if (in == "int")
    cout<<sizeof(int);
    else if (in == "short")
    cout<<sizeof(short);
    else if (in == "float")
    cout<<sizeof(float);
    else if (in == "double")
    cout<<sizeof(double);
    else if (in == "long")
    cout<<sizeof(long);
    
    return 0;
}