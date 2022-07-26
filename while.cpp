#include<iostream>

using namespace std;

int main(){

    int i, n, count=1;
    cout << "Enter number of rows: ";
    cin >> n;

    while(count <= n){
        i = 0;
        while(i <= (n - count)){
            cout << " ";
            i++;
        }
        i = 0;
        while(i < (2 * count - 1)){
            cout << "*";
            i++;
        }
        
        cout << endl;
        count++;
    }


    return 0;
}


/*

output::

input value: rows= 8

        *
       ***
      *****
     *******
    *********
   ***********
  *************
 ***************

*/
