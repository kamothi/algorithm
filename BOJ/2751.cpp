#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    vector<int> v;
    cin >> n;
    for(int i=0;i<n;i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++) cout << v[i] << "\n";
}
