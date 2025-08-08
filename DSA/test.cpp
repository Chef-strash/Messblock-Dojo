#include <iostream>
#include <string>

using namespace std;

int sum(int a, int b){
    return a+b;
}

void swap(int *a, int *b){
    int temp= *a;
    *a= *b;
    *b= temp;
}

int main(){
    // int a= 6;
    // int b= 4;
    // // cout << a+b << endl;
    // // cout << sum(a, b) << endl;
    // cout << a << " " << b << endl;
    // swap(&a, &b);
    // cout << a << " " << b;

    // if (a == b){
    //     cout <<
    // }
    // string s1;
    // string s2;

    // getline(cin, s1);
    // getline(cin, s2);
    // cout << s1 << "\n" << s2 <<endl;

    // int day;
    // cin >> day;
    // switch(day){
    //     case 1:
    //         cout<< "1";
    //     case 2:
    //         cout << "2";
    //         break;
    //     case 3:
    //         cout << "3";
    //     default:
    //         cout << "iusbdfv";
    // }

    // int array[4]= {1, 2, 3, 4};
    // cout<< "size : " << sizeof(array)/sizeof(array[0]) << endl;
    // array[0]= 99;
    // for(int i=0; i<4; i++){
    //     cout << array[i] << " ";
    // }

    // string s= "hello bois";
    // cout<<s<< endl;
    // s[0]= 'H';
    // cout<<s<< endl;
    // cout << s.size()<< endl ;

    // cout << char('A' + 4);

    for (int i=0; i<5; i++){
        for (int j=0; j<=i; j++){
            cout << char('A' + 4 + j - i) << " ";
        }
        cout << "\n";
    }
}