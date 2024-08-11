// Disjoint Set Union

#include<bits/stdc++.h>
using namespace std;

int findParent(int a, vector<int>&parent){
    // finds the parent in DSU
    if(parent[a] == a) return a;
    return parent[a] =  findParent(parent[a], parent);
}
void addDSU(int &a, int &b, vector<int>&parent, vector<int>&rank){
    // adds the element to the DSU
    int parentA = findParent(a, parent);
    int parentB = findParent(b, parent);
    if(parentA == parentB) return;
    // rank
    if(rank[a] == rank[b]){
        rank[a]++;
        parent[b] = a;
    }
    else{
        rank[a] > rank[b] ? parent[b] = a : parent[a] = b;
    }
}
int main(){
    int n, e;
    cin>>n>>e;
    vector<int> nodes(n);
    vector<int> parent(n);
    vector<int> rank(n, 0);
    for(int i=0;i<n;i++) nodes[i] = parent[i] = i;
    for(int i=0;i<e;i++){
        int a, b;
        cin>>a>>b;
        addDSU(a, b, parent, rank);
    }
    cout<<findParent(1, parent)<<endl;
    cout<<findParent(5, parent)<<endl;
    cout<<findParent(3, parent)<<endl;
    cout<<findParent(1, parent)<<endl;
    cout<<findParent(3, parent)<<endl;

}