// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// 1
// 21
// 321
// 4321


#include<iostream>
using namespace std;


int main(){

    int N, i = 1;
    cin >> N;
    
    while(i <= N)
    {
        int j = 1;
        while(j <= i)
        {
            cout << i-j+1;
            j++;
        }
        cout << endl;
        i++;
    }
  
}


