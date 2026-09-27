#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter an integer: ";
    cin>>n;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i; j++){
            char ch = 'A' + j;
            cout<<ch;
        }
        for(int k = n-i; k>=1; k--){
            char ch = 'A' + k - 1;
            cout<<ch;
        }
        cout<<endl;
    }
}