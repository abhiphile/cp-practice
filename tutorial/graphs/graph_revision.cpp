#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;

void dfs_recursive(int root, vector<bool> &vis)
{
    // dfs recursive traversal of graph
    int n = adj.size();
    vis[root] = true;
    cout << root << " ";
    for (int adjNode : adj[root])
    {
        if (!vis[adjNode])
            dfs_recursive(adjNode, vis);
    }
}

void dfs_iterative(int root, vector<bool> &vis)
{
    // dfs iterative
    stack<int> st;
    if (!vis[root])
    {
        vis[root] = true;
        st.push(root);
    }
    while (!st.empty())
    {
        int top = st.top();
        st.pop();
        cout << top << " ";
        for (int adjNode : adj[top])
        {
            if (!vis[adjNode])
            {
                st.push(adjNode);
                vis[adjNode] = true;
            }
        }
    }
}

void bfs_iterative(int root, vector<bool> &vis)
{
    // bfs iterative code
    int n = adj.size();
    queue<int> q;

    if (!vis[root])
    {
        q.push(root);
        vis[root] = true; // make it vis everytime you push to queue
    }

    while (!q.empty())
    {
        int front = q.front();
        cout << front << " ";
        q.pop();
        for (int adjNode : adj[front])
        {
            if (!vis[adjNode])
            {
                q.push(adjNode);
                vis[adjNode] = true;
            }
        }
    }
}

void traverse()
{
    // code to traverse using dfs
    int n = adj.size();
    vector<bool> vis(n, 0);
    bfs_iterative(0, vis);
    cout << endl;
}

void create_adj(vector<pair<int, int>> &edges, bool isDirected = false)
{
    for (auto edge : edges)
    {
        adj[edge.first].push_back(edge.second);
        // incase of undirected
        if (!isDirected)
            adj[edge.second].push_back(edge.first);
    }
}
int main()
{
    int n, e; // nodes, edges
    cin >> n >> e;
    vector<pair<int, int>> edges;
    adj.resize(n);
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        edges.push_back({a, b});
    }
    create_adj(edges);
    traverse();
    return 0;
}