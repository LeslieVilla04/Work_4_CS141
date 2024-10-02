
#include <iostream>  // For input/output operations
#include <string>     // For handling string data (if needed)


using namespace std;

int main(){

    int n = 0;// total # of swaps from 0 to 10000
    int a = 0; //
    int b = 0;

    cin >> n; //user inputs here
            //say user inputs 5, 5 swaps //good initiation


    if(n >= 0 && n <= 10000){
        
        if(n == 0){ //base
            cout << 3 << endl;
        }
        else if(n == 1){ //2 - only swap once
            cin >> a >> b;
            while(a && b){// this could be any other # and 3
            if(a == 3 && b != 3){
                cout << b << endl; //always return the other number bc that the number
            }            //than 3 is being swapped with
            else{
                cout << a << endl;
            }
            }
        }
        else{ //3
            cin >> a >> b;
            while(1 <= a && b <= n){
                cout << a << end;
            }
        }
        
    }


    return 0;
}
