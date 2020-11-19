class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int increase=0;
        int length=1;
        int maxlength=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]<arr[i-1]){
                if(increase==1){
                    length++;
                    if(length>maxlength) maxlength=length;
                }
                else if(increase==0){
                    if(length>maxlength) maxlength=length;
                    length=2;
                    if(length>maxlength) maxlength=length;
                }
                else{
                    if(length>maxlength) maxlength=length;
                    length=2;
                    if(length>maxlength) maxlength=length;
                }
                increase=-1;
            }
            else if(arr[i]==arr[i-1]){
                if(length>maxlength) maxlength=length;
                length=1;
                increase=0;
            }
            else{
                if(increase==-1){
                    length++;
                    if(length>maxlength) maxlength=length;
                }
                else {
                    if(length>maxlength) maxlength=length;
                    length=2;
                    if(length>maxlength) maxlength=length;
                }
                increase=1;
            }
        }
        return maxlength;
    }
};