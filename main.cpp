//This code is only using 1 word and encrypting it with 512 bit hash value using SHA-1 algorithm
#include <iostream>
#include <iomanip>
using namespace std;

  int main() {
      char original;
      int a,singlebit=0;
      int block [15] ;
      cout << "How many characters would you like to encrypt?\n";
      cin >> a;
      cout << "Enter a character: ";
      cin >> original;
      //Converts ASCII to binary
      int ascii = original;
      int binary[513] ,temp=0;
      //Works with single character only for now
      if (a==1){
        singlebit=8;
      }
      else {cout << "This only works with 1 character at a     time\n";
            return 0;}
    //Converts ASCII to binary
      for (int i = 511; i >= 0; i--) {
          binary[i] = ascii % 2;
          ascii = ascii / 2;
        //Adds 1 bit at the end of binary number 
        //512-8=504 zeroes are added
        if (binary [i] == binary[504]){
          binary[i]=1;
        }
        if (i>0 && i< 7){
          binary[i]=singlebit%2;
          singlebit=singlebit/2;
        }
        temp++;
      }
      for (int i = 512; i >=0; i--) {
          cout << binary[i];
      }
      for(int i = 0 ; i <=15 ; i++){
        if (binary[i] == 0)
          block [i] = 0x000000 + ascii%16;
        else if (binary[i] == 15) 
          block [i] = 0x00000008;
        else 
          block [i] = 0x00000000;
      }
      cout << endl <<temp  <<endl ;
      cout << block [0];

  }
