// Topological sort
// Topological sorting is an algorithm that orders steps
// in a process where some steps depend on others.

#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
using namespace std;

// Time complexity will be O(V + E)
void dfs(int root, vector<vector<int>> &adj, vector<bool> &vis, stack<int> &st)
{
    vis[root] = true;
    for(int child:adj[root]) if(!vis[child]) dfs(child, adj, vis, st);

    st.push(root);
}
void topoSortDFS(vector<vector<int>> &adj)
{
    int n = adj.size();
    int m = adj[0].size();
    vector<bool> vis(n, false); // visited node
    stack<int> st;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i]) dfs(i, adj, vis, st);
    }
    while(!st.empty()){
        int top = st.top();
        ans.push_back(top);
        st.pop();
    }
    // printing the result
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;
}


// Topological sorting using BFS | Khan's Algorithm
// For topological sorting
// Time complexity = O()
void topoSortBFS(vector<vector<int>> &adj)
{
    int n = adj.size();
    vector<int> inDegree(n, 0);
    // calculate the indegree of every node
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < adj[i].size(); j++)
        {
            inDegree[adj[i][j]]++;
        }
    }
    queue<int> q;
    // if indegree is 0 then push it into the queue
    for (int i = 0; i < n; i++)
        if (inDegree[i] == 0)
            q.push(i);

    vector<int> res;
    while (!q.empty())
    {
        int top = q.front();
        res.push_back(top);
        q.pop();
        for (int child : adj[top])
        {
            inDegree[child]--;
            if (inDegree[child] == 0)
                q.push(child);
        }
    }

    // Printing the result
    for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
    cout<<endl;
}

int main()
{
    fastio;
    int n, e; // nodes and edges
    cin >> n >> e;
    vector<vector<int>> adj(n);
    int u, v;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
    }
    topoSortBFS(adj);
    topoSortDFS(adj);
    return 0;
}