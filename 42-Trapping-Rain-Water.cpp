class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int lmax[size];
    lmax[0]= height[0];
    int rmax[size];
    rmax[size-1]= height[size-1];
    for(int i=1; i<size; i++){
        
        lmax[i]= max(height[i], lmax[i-1]);
    }
    for(int i=size-2; i>=0; i--){
        
        rmax[i]= max(height[i], rmax[i+1]);
    }
    int wl[size];
    int trapped[size];
    int sum=0;
    for(int i=0; i<size; i++){
        wl[i] = min(lmax[i], rmax[i]);
        trapped[i]=wl[i]-height[i];
        sum+=trapped[i];
    }
    
    
    return sum;
        

        
    }
};