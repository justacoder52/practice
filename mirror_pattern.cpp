#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    // int n_copy = n;

    for(int row = 1; row<=n; row++){
        //Spaces
        for(int spaces  = 1; spaces<=n-row; spaces++){
            cout<<"  ";
        }
        //Increasing Numbers
        for(int inum = 1; inum<=row; inum++){
            cout<<inum<<" ";
        }
        //Decreasing Numbers
        
        for(int dnum = row-1; dnum>=1; dnum--){
            cout<<dnum<<" ";
        }
        cout<<endl;
        
    }
    for(int row = n-1; row>=1; row--){
        //Spaces
        for(int spaces  = 1; spaces<=n-row; spaces++){
            cout<<"  ";
        }
        //Increasing Numbers
        for(int inum = 1; inum<=row; inum++){
            cout<<inum<<" ";
        }
        //Decreasing Numbers
        
        for(int dnum = row-1; dnum>=1; dnum--){
            cout<<dnum<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
