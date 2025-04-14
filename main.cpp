#include <iostream>
using namespace std;
int main(){
    char name;
    cout << "Enter one word\n";
    cin >> name;
    int Ascii = name;
    int binary [512] = {0};
    int temp = 0;
    for (int i = 0 ; i <512 ; i++){
        binary [i] = Ascii %2;
        Ascii = Ascii / 2;
        temp = temp+1;
    }
    ++temp;
    for (int i = 0 ;i<(512-temp); i++){
        if (i  == (504 || 505 || 506 || 507 || 508 || 509 || 510 || 511) ){
            binary [i] = temp %2;
            temp = temp / 2;
        }
        else {
            if (i <=temp ){
                continue;
            } 
            else {
                binary [i] = 0;
            }
        }
    }
    for (int i = 0 ; i <512 ; i++){
        cout << binary [i] ;
    }
    

    cout << temp ;
    cout << endl;
}