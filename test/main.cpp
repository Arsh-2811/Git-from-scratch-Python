#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void print_hashset(unordered_set<int> hashset){
    for(auto it = hashset.begin(); it != hashset.end(); it++){
        cout << *it << " ";
    }
    cout << "\n";
}

int main(){
    cout << "Hello World!" << endl;
    return 0;
}