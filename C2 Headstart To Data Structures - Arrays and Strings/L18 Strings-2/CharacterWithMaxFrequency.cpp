// Ques. Given a string consisting of lowercase English alphabets.
// Print the character that is occuring most number of times.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "aabbbccddddeeffghhhhiijjklmn";
//     int n = s.size();

//     // sort(s.begin(),s.end());

//     int maxCount = 0;
//     int idx = -1;
//     for(int i=0;i<n;i++){
//         int count = 0;
//         for(int j=0;j<n and i!=j;j++){
//             if(s[i] == s[j]) count++;
//         }
//         if(count > maxCount){
//             idx = i;
//             maxCount = count;
//         }
//     }

//     cout<<"Most repeating character: "<<s[idx];
// }

// METHOD-2: BEST METHOD (less time complexity, using some spaces)

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "leetcode";
    vector<int>arr(26,0);
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++;
    }
    int max = 0;
    for(int i=0;i<26;i++){
        if(arr[i]>max) max = arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==max){
            int ascii = i + 97;
            char ch = (char) ascii;
            cout<<ch<<" "<<max<<endl;
        }
    }
}