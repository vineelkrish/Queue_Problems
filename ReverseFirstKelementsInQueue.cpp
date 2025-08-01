#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        if(k>q.size()) return q;
        stack<int> s;
        while(k!=0)
        {
            s.push(q.front());
            q.pop();
            k--;
        }
        vector<int> arr;
        while(!q.empty()){ 
            arr.push_back(q.front());
            q.pop();
        }
        while(!s.empty())
        {
            q.push(s.top());
            s.pop();
        }
        for(int i=0;i<arr.size();i++)
        {
            q.push(arr[i]);
        }
        return q;
    }
};