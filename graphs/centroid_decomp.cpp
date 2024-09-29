/*
	Centroid-Decomposition

	Notes: centroid decomposition of a tree implementation 1

	Complexity: O(n log n)
*/

struct CentroidDecomposition
{
    set<int> graph[maxn];
    int subtreesz[maxn], par[maxn];
 
    void init(int n)
    {
        for(int i=1; i<=n; i++)
        {
            graph[i].clear();
            dist[i].clear();
        }
    }
 
    void add_edge(int u, int v)
    {
        graph[u].insert(v);
        graph[v].insert(u);
    }
 
    int find_subtree_sz(int u, int p)
    {
        subtreesz[u] = 1;
        for(auto v : graph[u])
        {
            if(v==p)continue;
            subtreesz[u] += find_subtree_sz(v, u);
        }
        return subtreesz[u];
    }
 
    int find_centroid(int u, int p, int n)
    {
        for(auto v : graph[u])
        {
            if(v==p)continue;
            if(subtreesz[v]>n/2)
                return find_centroid(v, u, n);
        }
        return u;
    }
 
    void build(int u, int p)
    {
        int n = find_subtree_sz(u, p);
        int c = find_centroid(u, p, n);
        if(p == -1) p = c;
        par[c] = p;

        //Compute some function here in the subtree of centroid c
 
        vector<int> tmp(graph[c].begin(), graph[c].end());
        for(auto v : tmp)
        {
            graph[c].erase(v);
            graph[v].erase(c);
            build(v, c);
        }
    }

}cd;
