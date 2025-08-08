#include <bits/stdc++.h>

using namespace std;
// prestoring/fetching

// inside main array can have a ax size of 10e6 and 10e7 globally
// 

int main(){
    int n;
    cin>> n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>> array[i];
    }

    // array hashing
    int hash[13]= {0};
    for(int i=0; i< n; i++){
        hash[array[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--){
        int x;
        cin>> x;

        cout<< hash[x] << endl;
    }

    // map hashing
    // O(log(n)) time complexity 
    map<int, int> m;
    for(int i=0; i<n; i++){-- 
        m[array[i]] +=1;
    }

    int q;
    cin >> q;
    while(q--){
        int x;
        cin>> x;

        cout<< m[x] << endl;
    }

    // unordered_map hashing 
    // most cases O(1) time complexity and O(n) space complexity
    unordered_map<int, int> u_m;
    for(int i=0; i<n; i++){
        u_m[array[i]] +=1;
    }

    int q;
    cin >> q;
    while(q--){
        int x;
        cin>> x;

        cout<< u_m[x] << endl;
    }
}
