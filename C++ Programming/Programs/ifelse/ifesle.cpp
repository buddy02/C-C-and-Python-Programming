#include<iostream>
using namespace std;
int main() {
    int savings;
    cin>>savings;
    if (savings>5000) {
        if(savings>10000)
            cout<<"Riya ke saath road trip";
        else
            cout<<"Riya ke saath pub";
    }
    else if(savings>2000) {
        if(savings>4000)
            cout<<"Priya ke sath restaurant";
        else
            cout<<"Priya ke sath market";
    }
    else
        cout<<"Friends ke saath bang bang";
}