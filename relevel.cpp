 #include<iostream>
 #include<vector>
 #include<unordered_map>
 #include<set>
 using namespace std;

 
 struct Q{
        int idx,l,r;
    };
    

   bool compare(Q q1, Q q2){
        if(q1.l == q2.l){
            return q1.r> q2.r;
        }
        return q1.l < q2.l;
    };
	vector<int>solveQueries(vector<int>nums, vector<vector<int> > Queries, int k){
	    // Code here
        vector<int> answer;
        int root = sqrt(nums.size());
                    int curr_l= Queries[0][0]-1;
            int curr_r = Queries[0][1]-1;
            int count = 0; 
                 int const N= 1e4+2;
    Q q[N];
            unordered_map<int,int> mpp;
            // vector<vector<int>> :: iterator it;
                        // for(it=Queries.begin(); it!= Queries.end(); ++it){
                for(int i=0;i<Queries.size();i++){        
                q[i].l = Queries[i][0]/root;
                q[i].r = Queries[i][1];
                
                q[i].idx = i;
            }

            set<int> s;


                    sort(Queries.begin(),Queries.end(),compare);   

            
            for(int i=Queries[0][0]-1;i<Queries[0][1];i++){
                if(mpp.find(nums[i]) == mpp.end()){
                    mpp.insert(nums[i],1);
                    if(mpp[nums[i]] >= k){
                        s.insert(nums[i]);
                    }
                    else{
                        
                    }
                }
                else{
                    mpp[nums[i]] ++;
                    if(mpp[nums[i]] >= k){
                        s.insert(nums[i]);
                    }
                }
            }   
                            answer.push_back(s.size());

        for(int i=1;i<Queries.size();i++){

            int l =Queries[i][0]-1;
            int r = Queries[i][1]-1;

            if(curr_l < l){
                while(curr_l != l){

                    mpp[nums[curr_l]]--;
                    if(mpp[nums[curr_l]] >= k){
                        s.insert(nums[curr_l]);
                    }
                    else{
                        s.erase(nums[curr_l]);
                    }
                    curr_l++;
                                      
                }
            }
            else if(curr_l >l){
                while(curr_l != l){
                                 curr_l --;                    
                if(mpp.find(nums[curr_l]) == mpp.end()){
                    mpp.insert(nums[curr_l],1);
                    if(mpp[nums[curr_l]] >= k){
                        s.insert(nums[curr_l]);
                    }
                }
                else{
                    mpp[nums[curr_l]] ++;
                    if(mpp[nums[curr_l]] >= k){
                        s.insert(nums[curr_l]);
                    }
                }
                }
                               
            }
            if(curr_r > r){
                while(curr_r != r){
                    mpp[nums[curr_r]] --;
                    if(mpp[nums[curr_r]] >= k){
                        s.insert(nums[curr_r]);
                    }
                    else{
                        s.erase(nums[curr_r]);
                    }   
                    curr_r--;
                }
            }
            else if(curr_r < r){
                while(curr_r !=r){
                curr_r ++;
               if(mpp.find(nums[curr_r]) == mpp.end()){
                    mpp.insert(nums[curr_r],1);
                    if(mpp[nums[curr_r]] >= k){
                        s.insert(nums[curr_r]);
                    }
                }
                else{
                    mpp[nums[curr_r]] ++;
                    if(mpp[nums[curr_r]] >= k){
                        s.insert(nums[curr_r]);
                    }
                }  
                }
            }   
            answer.push_back(s.size());
            }
        
        return answer;
	}

    int main(){



        return 0;
    }
