class TimeMap {
public:
 map<string,vector<pair<int,string>>> m;
    TimeMap() {
       
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        vector<pair<int,string>> arr=m[key];
        int left=0,right=arr.size()-1;
        string res="";
        while(left<=right){
            int mid=(left+right)/2;
            if(arr[mid].first<=timestamp){
                res=arr[mid].second;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return res;
    }
};
