class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {

        vector<int> parent(n);

        iota(parent.begin(), parent.end(), 0);

        function<int(int)> find = [&](int x){

                if(parent[x] != x)
                {
                    parent[x] = find(parent[x]);
                }
                return parent[x];
        };

        for(auto &edge : edges ){

            int rootA = find(edge[0]);

            int rootB = find(edge[1]);
        

        if(rootA == rootB){
            return false;
        }

        parent[rootA] = rootB;

        --n;

        }

        return n == 1;
    }
};
