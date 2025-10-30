#include <iostream>
using namespace std;

int tratar(int x){
    if(x % 8 == 5){
        return 3;
    }
    if(x % 8 == 4){
        return 2;
    }
    if(x % 8 == 3){
        return 1;
    }else{
        return 0;
    }
    
}

int main(){
    int x;
    cin >> x;

    cout << tratar(x-3) << '\n';
    return 0;
}