// https://leetcode.com/problems/course-schedule-iii/

class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(), courses.end(), [&](vector<int>& a, vector<int>& b){return a[1] < b[1];});
        
        priority_queue<int> pq;
        int time = 0;
        
        for(int i=0; i<courses.size(); i++){
            time += courses[i][0];
            pq.push(courses[i][0]);
            
            if(time > courses[i][1]){
                time -= pq.top();
                pq.pop();
            }
        }
        
        return pq.size();
    }
};