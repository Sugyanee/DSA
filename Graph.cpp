#include <bits/stdc++.h>
using namespace std;

vector<int> CourseSchedule(int numCourses, vector<vector<int>>& prerequisites){
    vector<vector<int>>adj(numCourses);
        for(auto it:prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        vector<int>indegree(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int>topo;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(topo.size()==numCourses)
        return topo;
        return {};
}

int main(){
    vector<vector<int>>prerequisites={{1,0},{2,0},{3,1},{3,2}};
    vector<int>res = CourseSchedule(4,prerequisites);
    for (auto task : res) {
		cout << task << " ";
	}
	cout << endl;
	return 0;
}