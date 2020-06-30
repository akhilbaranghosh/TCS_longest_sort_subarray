#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int start=0;
    int end=0;
    pair<int,int> p={0,0};
    for (int i = 1; i < n; ++i) {
        if(v[i]<v[i-1]){
            if(p.second-p.first<end-start){
                p.second=end;
                p.first=start;
            }
            start=end=i;
        }
        else{
            end++;
        }
    }
    for (int i = p.first; i <= p.second; ++i) {
        cout << v[i] << endl;
    }
}