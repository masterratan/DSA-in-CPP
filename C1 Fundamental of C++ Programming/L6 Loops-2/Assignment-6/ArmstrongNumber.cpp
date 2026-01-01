#include<iostream>
using namespace std;
int main(){
    int ld1,ld2,ld3;
    for(int i=1;i<=500;i++){
        ld1 = i%10; // ones place
        ld2 = (i%100 - ld1)/10; // tens place
        ld3 = (i - (10*ld2 + ld1))/100; // hundredth place
        if(i == (ld1*ld1*ld1) + (ld2*ld2*ld2) + (ld3*ld3*ld3)){
            cout<<ld3<<ld2<<ld1<<endl;
        }
    }
}

// METHOD-2

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=500;i++){
        int temp = i;
        int sum = 0;
        while(temp){
            int digit = temp%10;
            sum += (digit*digit*digit);
            temp /= 10;
        }
        if(sum == i) cout<<i<<endl;
    }
}