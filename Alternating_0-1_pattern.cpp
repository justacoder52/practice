#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int rows = 1; rows<=n; rows++){
        for(int columns = 1; columns<=rows; columns++){
            if((rows+columns)%2==0){
                cout<<"1 ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
        return 0;
    }
}