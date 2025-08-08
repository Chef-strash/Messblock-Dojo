#include <bits/stdc++.h>

using namespace std;

void sec_lar(int array[], int n){
    int f= array[0];
    int s= -1;
    for(int i=1; i< n; i++){
        if(array[i] > f){
            s= f;
            f= array[i];
        }
        else if(array[i] > s && array[i] < f){
            s= array[i];
        }
    }
    cout << f << " "<< s << endl;
}

bool check(int array[], int n){
    int pos;
    int count= 0;
    for(int i= 1; i< n; i++){
        if(array[i]  < array[i - 1]){
            pos= i;
            count++;
        }
    }
    if(count >= 2){
        // cout<< count<<endl;
        return false;
    }
    else if(count == 0){
        // cout<< count<<endl;
        return true;
    }
    else if(count == 1){
        for(int i=0; i< n-1; i++){
            int c= (i + pos)% n;
            if(array[c] > array[(c+ 1)%n]){
                return false;
            }
        }
        // cout<< count<<endl;
        return true;
    }
}

int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        int count= 1;
        int idx= 0;
        int j=1; 
        for(int i=1; i< n; i++){
            if(nums[i]!=nums[idx]){
                count++;
                idx= i;
                nums[j]= nums[idx];
                j++;
            }
        }
        for(int i= j; i< n;i ++){
            nums.pop_back();
        }
        return count;
    }

void rotate(vector<int>& nums, int k) {
    int n= nums.size();
    // vector<int> nnums(n);
    // for(int i=0; i< n; i++){
    //     int j= (i + k) % (n);
    //     nnums[j]= nums[i];
    // }
    // for(int i=0; i< n; i++){
    //     nums[i]= nnums[i];
    // }
    for(int i=0; i< n - k; i++){
        nums.push_back(nums[i]);
    }
    nums.erase(nums.begin(), nums.begin() + k + 1);

}

int main(){
    // int array[3]= {1, 1, 2, 3, 5, 5, 6};
    // sec_lar(array, 5);
    // bool a= check(array, 3);
    // cout << (a ? "Yes" : "No") << endl;
    vector<int> nums= {1,2,3,4,5,6,7};
    // cout << removeDuplicates(nums);
    rotate(nums, 3);
    for (int c: nums){
        cout<< c << " ";
    }
}