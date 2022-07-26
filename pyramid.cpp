#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i= 1; i <= n; i++){
        for(int space=i; space < n; space++){
             cout << " ";
        }
        for(int j=1; j <= (2 * n-1); j++){
            //cout << "* ";
            if(i == n || j == 1 || j == 2 * i - 1){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }


    return 0;
}




/*
output::

input value: rows=8


       *              
      * *            
     *   *          
    *     *        
   *       *      
  *         *    
 *           *  
***************


*/
