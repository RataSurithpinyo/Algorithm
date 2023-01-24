#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; cin>> n;
    vector<pair<int,int>> data; //
    for (int i=0; i<n; i++){
        int a,b; cin >> a >> b;
        data.push_back({a,b});
    }
    sort(data.begin(),data.end());
    int before = data[0].second;
    bool p = false;
    for (int i=1; i<n; i++){
        if (data[i].second < before) {
            p = true; break;
        } else {
            before = data[i].second;
        }
    }
    if(p) cout << "Happy Alex";
    else cout << "Poor Alex";
}