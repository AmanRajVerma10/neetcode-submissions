class TimeMap {
public:
map<string,vector<pair<string,int>>> m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        auto& arr= m[key];
        int i=0,j=arr.size()-1;
        string res="";
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid].second<=timestamp){
                res=arr[mid].first;
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return res;
    }
};