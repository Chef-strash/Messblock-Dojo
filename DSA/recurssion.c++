#include <bits/stdc++.h>

using namespace std;

void pr(int N){
    if (N==0){
        return;
    }
    else{
        cout<<"Hello" << N << endl;
        pr(N-1);
    }
}

void reverse(vector <int> *vec, int start, int end){
    if (start >= end) return ;
    else{
        swap((*vec)[start], (*vec)[end]);
        reverse(vec, start + 1, end - 1);
    }
}

void check_pal(string s, int start, int end){
    if (start >= end){
        cout << "Palindrome" << endl;
        return;
    }

    else if(s[start]== s[end]){
        check_pal(s, start + 1, end - 1);
    }
    else{
        cout << "Not Palindrome" << endl;
        return;
    }
}

int main(){
    // print multiplr times
    pr(5);

    // reverse
    vector <int> vec= {1, 2, 3, 4, 5};
    for(auto i: vec){
        cout<< i << " ";
    }

    reverse(&vec, 0, vec.size()-1);
    cout << endl;

    for(auto i: vec){
        cout<< i << " ";
    }

    cout << endl;
    // check pallindrome
    string s= "madam";
    check_pal(s, 0, s.size() - 1);

}