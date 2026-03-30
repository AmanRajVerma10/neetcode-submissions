class MinStack {
public:
vector<pair<int,int>> v1;
    MinStack() {
        
    }
    
    void push(int val) {
        if(v1.empty()){
            v1.push_back({val,val});
        }
        else{
            v1.push_back({val, min(v1.back().second,val)});
        }
    }
    
    void pop() {
        v1.pop_back();
    }
    
    int top() {
        return v1.back().first;
    }
    
    int getMin() {
        return v1.back().second;
    }
};
