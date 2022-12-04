// Print the following pattern for the given number of rows.
// Pattern for N = 5
// E
// DE
// CDE
// BCDE
// ABCDE


#include<iostream>
using namespace std;


int main(){

    int N, i = 1;    
    cin >> N;
    
    while(i <= N)
    {
        char c = 'A' + N - i;
        int j = 1;
        while(j <= i)
        {
            cout << c;
            c++;
            j++;
        }
        
        cout << endl;
        i++;
    }
  
}


