#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a string followed by '$': ";
    cin>>ch;
    int n = 0;

    while(ch != '$'){
        n++;
        cin>>ch;
    }

    cout<<"Number of characters entered: "<<n<<endl;
    return 0;
}