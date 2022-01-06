#include<bits/stdc++.h>
using namespace std;
int main(){
    int loanAmount, NoOfYears, tenure, n, bank[2], emi;
    float MIR;
    cin>>loanAmount>>tenure;
    for(int i=0; i<2; i++){
        int sum=0;
        cin>>n;
        for(int j=0; j<n; j++){
            //cout<<j;
            cin>>NoOfYears>>MIR;
            emi = (loanAmount*MIR) / (1 - (1/(pow(1+MIR, NoOfYears*12))));
            sum = sum+emi;
        }
        bank[i]=sum;
    }
    if(bank[0]>bank[1]){
        cout<<"Bank B";
    }
    else{
        cout<<"Bank A";
    }
    return 0;
}
_______________________________________________________
10000
20
3
5 9.5
10 9.6
5 8.5
3
10 6.9
5 8.5
5 7.9
Bank B
