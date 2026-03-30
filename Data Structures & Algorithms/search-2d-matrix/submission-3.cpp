class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int top=0,bot=rows-1;
        int mid;
        while(top<=bot){
            mid=(top+bot)/2;
            if(target>=matrix[mid][0] && target<=matrix[mid][cols-1]){
                break;
            }
            else if(target<matrix[mid][0]){
                bot=mid-1;
            }
            else if(target>matrix[mid][cols-1]){
                top=mid+1;
            }
        }
         if (!(top <= bot)) {
            return false;
        }
        int l=0,h=matrix[mid].size()-1;
        while(l<=h){
            int m=(l+h)/2;
            if(target==matrix[mid][m]){
                return true;
            }
            else if(target>matrix[mid][m]){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return false;
    }
};
