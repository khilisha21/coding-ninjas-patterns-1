// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// A
// BC
// CDE
// DEFG


#include<iostream>
using namespace std;


int main(){

    int N, i = 1;    
    cin >> N;
    
    while(i <= N)
    {
        char c = 'A' + i - 1;
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


