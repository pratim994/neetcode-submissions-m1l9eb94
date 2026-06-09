class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {

       vector<int> g[n];  int ans =0;

       for(auto &e : edges){
            int a = e[0];  int b = e[1];

            g[a].push_back(b); 

            g[b].push_back(a);

       }
    vector<bool> visited(n);

    function<int(int)> dfs = [&](int i){

        if(visited[i]){
            return 0;
        }

        visited[i] = true;

        for(int j : g[i]){

            dfs(j);
        }
        return 1;
    };

     for(int i = 0; i  < n ; ++i){

        ans += dfs(i);
     }  

     return ans;            
    }
};
