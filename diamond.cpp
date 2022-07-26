#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 0; i <=n; i++){
        for(int space = n; space>i; --space){
            cout << " ";
        }
        for(int j =0; j < i; ++j){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i= 1; i < n; i++){
        for(int space=0; space < i; space++){
            cout << " ";
        }
        for(int j = n; j>i; j--){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}


/*
output::
input value: rows= 8
        
       * 
      * * 
     * * * 
    * * * * 
   * * * * * 
  * * * * * * 
 * * * * * * * 
* * * * * * * * 
 * * * * * * * 
  * * * * * * 
   * * * * * 
    * * * * 
     * * * 
      * * 
       * 


*/
