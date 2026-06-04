class Solution {
public:

    vector<int> topological_sort(unordered_map<int, vector<int>> &adj, vector<int> &indegree, int n){

        queue<int> que;

        vector<int> result;

        int count = 0;

        for(int  i = 0; i < n; i++){
            if(indegree[i] == 0){

                que.push(i);
                count++;
                result.push_back(i);
            }
        }

        while(!que.empty()){

            int u = que.front();

            que.pop();

            for(int &v : adj[u]){

                indegree[v]--;

                if(indegree[v] == 0){
                    que.push(v);
                    result.push_back(v);
                    count++;
                }
            }
        }

        if(count == n)
            return result;
        
        else 
            return {};
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& pre) {

        unordered_map<int , vector<int>> adj;

        vector<int> indegree(numCourses, 0);

        int count =0;

        for(auto &vec : pre )

            {
                int a = vec[0];

                int b = vec[1];

                adj[b].push_back(a);

                indegree[a]++;
            }

            return topological_sort(adj, indegree, numCourses);
        
    }
};
