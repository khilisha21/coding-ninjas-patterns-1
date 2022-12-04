// Print the following pattern for the given N number of rows.
// Pattern for N = 3
//  A
//  BB
//  CCC


#include<iostream>
using namespace std;


int main(){

    int N, i = 1;
    char c = 'A';
    cin >> N;
    
    while(i <= N)
    {
        int j = 1;
        while(j <= i)
        {
            cout << c;
            j++;
        }
        c++;
        cout << endl;
        i++;
    }
  
}


