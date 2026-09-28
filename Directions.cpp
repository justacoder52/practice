#include <iostream>
using namespace std;

int main(){

    int x = 0, y = 0;
    char ch;
    cout<<"Enter the directions: ";
    ch = cin.get();
    while(ch != '\n'){
        if(ch == 'N'){
            y++;
        }
        else if(ch == 'S'){
            y--;
        }
        else if(ch == 'E'){
            x++;
        }
        else if(ch == 'W'){
            x--;
        }
        ch = cin.get();
    }
    if(x == 0 && y == 0){
        cout<<"You are at the origin.";
    }
    else{
        while(x != 0 || y != 0){
            if(x > 0){
                cout<<"E";
                x--;
            }
            else if(x < 0){
                cout<<"W";
                x++;
            }
            else if(y > 0){
                cout<<"N";
                y--;
            }
            else if(y < 0){
                cout<<"S";
                y++;
            }
        }
    }
    
    cout<<endl;
    return 0;
}