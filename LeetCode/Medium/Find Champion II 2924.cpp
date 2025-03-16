class Solution {
    public:
        int findChampion(int n, vector<vector<int>>& edges) {
            vector<int> inDegree(n, 0); 
            vector<vector<int>> adjList(n, vector<int>()); 
    
            for (const auto& edge : edges) {
                int u = edge[0];
                int v = edge[1];
                adjList[u].push_back(v);
                inDegree[v]++; 
            }
    
            queue<int> q;
            for (int i = 0; i < n; i++) {
                if (inDegree[i] == 0) {
                    q.push(i); 
                }
            }
    
            if (q.size() != 1) {
                return -1; 
            }
    
            int champion = q.front();
    
            while (!q.empty()) {
                int team = q.front();
                q.pop();
    
                for (int neighbor : adjList[team]) {
                    inDegree[neighbor]--;
                    if (inDegree[neighbor] == 0) {
                        q.push(neighbor); 
                    }
                }
            }
    
            return champion;
        }
    };