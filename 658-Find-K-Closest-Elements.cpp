class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int>v;
        int lo =0;
        int hi =n-1;
        int idx;
        bool flag =false;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid]==x){
                flag=true;
                idx = mid;
                break;
            }
            else if(arr[mid]>x) hi =mid-1;
            else if(arr[mid]<x) lo = mid+1;
           }
           if(flag==true){
              v.push_back(x);
              k--;
              lo= idx-1;
              hi=idx+1;

              while(k>0){
                int a;
                int b;
                if(lo==-1){
                    v.push_back(arr[hi]);
                    hi++;
                    k--;
                }
                if(hi==n){
                    v.push_back(arr[lo]);
                    lo--;
                    k--;
                }
                if(lo>=0 && hi<=n-1){
                 a = abs(arr[lo]-x);
                 b=  abs(arr[hi]- x);
                if( a<=b){
                    v.push_back(arr[lo]);
                    lo--;
                    k--;
                }
                else if(a>b){
                    v.push_back(arr[hi]);
                    hi++;
                    k--;
                }
                }
              }
           }
           else{
            if(hi == n-1 && lo>hi){
                 while(k>0){
                 v.push_back(arr[hi]);
                   hi--;
                   k--;
                }
            }
            else if(lo==0 && hi<lo ){
                while(k>0){
                 v.push_back(arr[lo]);
                   lo++;
                   k--;
                }
            }
            else {
                int a;
                int b;
                while(k>0){
                if(hi==-1){
                    v.push_back(arr[lo]);
                    lo++;
                    k--;
                }
                if(lo==n){
                    v.push_back(arr[hi]);
                    hi--;
                    k--;
                }
                if(hi>=0 && lo<=n-1){
                 a = abs(arr[hi]-x);
                 b=  abs(arr[lo]- x);
                  if( a<=b){
                    v.push_back(arr[hi]);
                    hi--;
                    k--;
                }
                else if(a>b){
                    v.push_back(arr[lo]);
                    lo++;
                    k--;
                }
                }
                
               
              }

            }
        

           }
           sort(v.begin(), v.end());

           return v;
    }
};