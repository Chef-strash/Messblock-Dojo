#include <bits/stdc++.h>

using namespace std;

void expPair(){
    pair<int, string> p1= {1, "ihsdnv"};
    cout << p1.first << " " << p1.second << endl;

    pair<int, int> p2;
    // cin>> p2.first >> p2.second;
    // cout << p2.first << " " << p2.second << endl;

    pair<int, int> arr[]= {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first << " " << arr[1].second << endl;
}

void expVector(){
    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(2);
    v1.emplace_back(3);
    cout << v1[0] << " " << v1[1] << " " << v1[2] << endl;

    vector<pair<int, int>> v2;
    v2.push_back({1, 2});
    cout << v2[0].first << " " << v2[0].second << endl;

    vector<int> v3(5, 100); // 5 elements, each initialized to 100
    for(int i=0; i<v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << endl;

    // Iterators
    vector <int> v4(v1); // creates copy of another vector
    vector <int>:: iterator it= v4.begin();

    it++;
    cout << *(it) << endl;
    vector <int>:: iterator it2= v1.end(); // poimts to address just after last element
    it2--;
    cout << *(it2) << endl;

    cout<< v1.back() << endl; // last element
    cout<< v1.at(0) << endl; // first element

    for(auto n: v1){
        cout << n << " ";
    }
 
    // Erasing 
    v3.erase(v3.begin() + 2); // removes the element at index 2

    v3.erase(v3.begin() + 1, v3.begin() + 3); // removes elements from [begin() + 1] to [begin() + 3)

    // Inserting
    vector<int> v5= {1, 2, 3};
    v5.insert(v5.begin() + 1, 100); // inserts 100 at index 1
    
    v5.insert(v5.begin() + 1, 2, 30); // inserts 30 at index 1, two times

    vector<int> cp = {50, 80};
    v5.insert(v5.begin(), cp.begin(), cp.end()); // inserts elements of cp at index 0

    v5.size();

    v5.pop_back(); // removes last element

    v1.swap(v5); // swaps contents of v1 and v5

    v5.clear(); // clears the vector

    v5.empty(); //True -- empty, False -- not empty
}

void expList(){ // cannot insert elements everwhere like vector, but can insert at front and back
    list <int> ls;
    ls.push_back(1);
    ls.emplace_back(2);

    ls.push_front(0);
    ls.emplace_front(-1);

    // rest fxns are same as vectors 
    // begin, end, clear, swap, empty, size
}

void expDeque(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(0);
    dq.emplace_front(-1);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();

    // rest fxns are same as vectors 
    // begin, end, clear, swap, empty, size, insert
}

void expStack(){ // LIFO
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout << st.top(); // prints top element
    st.pop(); // removes top element
    st.size();
    st.empty();

    stack<int> st2= st;
    st.swap(st2);
}


void expQueue(){ // FIFO
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);

    q.back(); // returns last element
    q.front(); // returns first element
    q.pop(); // removes first element
    q.size();
}


void expPriorityQueue(){ // max heap by default, can be made min heap using greater<int>
    // max heap: top element is the largest, min heap: top element is the smallest
    priority_queue<int> pq; // max heap
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.emplace(4);

    cout << pq.top(); // prints top element
    pq.pop(); // removes top element
    pq.size();
    pq.empty();

    priority_queue<int, vector<int>, greater<int>> minHeap; // min heap
    minHeap.push(1);
    minHeap.push(2);
    minHeap.push(3);
    minHeap.emplace(4);
}


void expSet(){ // stores unique elements in sorted order
    // can be used to remove duplicates from a vector
    set<int> s;
    s.insert(1);
    s.emplace(2);
    s.insert(3);
    s.insert(4);

    s.erase(2); // removes element 2
    s.erase(s.begin()); // removes first element

    int cnt= s.count(3); // returns 1 if 3 is present, else 0
    int c= s.find(3);
}


void expMultiSet(){
    multiset<int> ms;
    ms.insert(1);
    ms.emplace(2);
    ms.insert(2); // allows duplicate elements
    ms.erase(1); // removes one instance of 1
    ms.erase(ms.begin()); // removes first element
}

void expMap(){
    map<int, int> m;
    m[1]= 2 ; // inserts key-value pair (1, 1)
    m.emplace(2, 3); // inserts key-value pair (2, 3)
    m.insert({3, 4}); // inserts key-value pair (3, 4)
     
    for(auto i: m){
        cout<< i.first << " " << i.second << endl; // prints key-value pairs
    }
    cout << m[1]<< endl;
    cout << m.at(2) << endl; // returns value for key 2

    auto it= m.find(2); // returns iterator to key 2
    cout << *(it).second << endl; // prints key-value pair for key 2
}

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p1.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first < p2.first) return true;
    return false;
}

void expAlgo(){
    array<int, 5> arr= {5, 3, 4, 1, 2};
    sort(arr.begin(), arr.end()); // sorts the array in ascending order
    sort(arr.begin(), arr.end(), greater<int>()); // sorts the array in descending order

    pair<int, int> a[]= {{1, 2}, {3, 2}, {5, 3}};
    sort(a, a + 3, comp); // sorts the array of pairs based on second element, then first element
    // comp is a self written comparator function

    int num= 7;
    int cnt= __builtin_popcount(num); // counts number of set bits in num
    cout << cnt << endl; 

    long long num2= 1000000007;
    int cnt= __builtin_popcountll(num2); // counts number of set bits in num2
    cout << cnt << endl; 

    string s= "312";
    sort(s.begin(), s.end());
    do{
        cout << s << endl;
    }
    while(next_permutation(s.begin(), s.end()));

    vector<int> v= {1, 2, 3, 4, 5};
    int max= *max_element(v.begin(), v.end());
}

