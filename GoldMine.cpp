/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

const int MAX = 100;

void bucket(int mine[][MAX], int r, int c){
    int goldTable[r][c], right, rightUp, rightDown;
    
    memset(goldTable, 0, sizeof(goldTable));
    
    for(int i = c-1; i>=0; i--){
        for(int j = 0; j<r; j++){
            right = (i == c-1)? 0 : goldTable[j][i+1];
            rightUp = (i == c-1 || j == 0)? 0: goldTable[j-1][i+1];
            rightDown = (i == c-1 || j == r-1)? 0: goldTable[j+1][i+1];
            
            goldTable[j][i] = mine[j][i] + max(right, max(rightUp, rightDown)); 
        }
    }
    int res = goldTable[0][0];
    for(int i=1; i<r; i++){
        res = max(res , goldTable[i][0]);
    }
    cout<<res;
}

int main()
{
    int mine[MAX][MAX] = { 
        {1, 3, 1, 5},
        {2, 2, 4, 1},
        {5, 0, 2, 3},
        {0, 6, 1, 2}
    };
    int r = 4, c =4;
    
    bucket(mine, r ,c);

    return 0;
}
output: 16
