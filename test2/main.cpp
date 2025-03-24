#include<bits/stdc++.h>
using namespace std;

void print_array(vector<int> &array){
    for(int i = 0; i < array.size(); i++) cout << array[i] << " ";
    cout << endl;
}

void print_hashmap(unordered_map<int, int> m){
    for(auto it = m.begin(); it != m.end(); it++){
        cout << it-> first << " " << it->second << endl;
    }
}

void print_hahset(unordered_set<int> s){
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void print_stack(stack<int> &s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
        cout << endl;
    }
}

void print_queue(queue<int> &q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main(){
    cout << "Hello World" << endl;
    return 0;
}