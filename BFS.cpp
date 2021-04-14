>> BFS 
       
        >>> Reources:
        
            T-1: https://cp-algorithms.com/graph/breadth-first-search.html
        
        >>> Implementation:

            const int N=200000;
            bool vis[N];
            int level[N];
            vector<int> adj[N];
            
            void bfs(int v)
            {
            	queue<int> q;
            	q.push(v);
            	vis[v]=1;
            	while(!q.empty())
            	{
            		int val=q.front();
            		q.pop();
            		for(auto i:adj[val])
            		{
            			if(!vis[i])
            			{
            			    q.push(i);
            				level[i]=level[val]+1;
            				vis[i]=1;
            			}
            		}
            	}
            }
        
        
        >>> Problems:
        
            Problem-1: https://codeforces.com/contest/1139/problem/C
            Solution : https://codeforces.com/contest/1139/submission/80188187
              
            Problem-2: https://codeforces.com/contest/689/problem/B
            Solution : https://codeforces.com/contest/689/submission/81431239
              
            Problem-3: https://codeforces.com/contest/979/problem/C
            Solution : https://codeforces.com/contest/979/submission/81596110
              
            Problem-4: https://codeforces.com/contest/954/problem/D
            Solution : https://codeforces.com/contest/954/submission/82590774
