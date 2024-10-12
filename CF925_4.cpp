#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;




int countZeroLast(int n){
    int c=0;
    while(n>0){
        int r = n%10;
        if(r!=0)
            break;
        c++;
        n/=10;
    }
    return c;
}

int countD(int n){
    int c=0;
    while(n>0){
        
        c++;
        n/=10;
    }
    return c;
}


int main() {

        #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output3.txt", "w", stdout);
    #endif

    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v;
        for(int i=0; i<n; i++){
            int g;
            cin>>g;
            v.emplace_back(g);
        }

        int sum = 0;
        vector<int> v2;
        for(int i=0; i<n; i++){
            sum+=countD(v[i]);
            v2.emplace_back(countZeroLast(v[i]));

        }
        sort(v2.begin(),v2.end(),greater<int>());
        for(int i=0; i<n; i+=2){
            sum-=v2[i];
        }
        if(sum>=(m+1))
            cout<<"Sasha";
        else
            cout<<"Anna";
        cout<<endl;

    }
}



