/*vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      vector<int> a;
         sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n = nums1.size();
        int m = nums2.size();
        //for(int i=0; i<n;i++){
        int i=0, j= 0;
        while(i<n && j<m){
            
            if(nums1[i]< nums2[j])
            i++;
            
            else if(nums1[i] > nums2[j])
                j++;
            
            else {
                
                int ans = nums1[i];
            a.push_back(ans);
                i++;
                j++;
        }
        }
        
        return a;
*/
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a;
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.begin());
        
        int n = nums1.size();
        int m = nums2.size();
        
        int i= 0, j = 0;
        //int j= 0;
        
        while(i<n && j<m){
            
            if(nums1[i]<nums2[j])
                i++;
            
            else if(nums1[i]>nums2[j])
                j++;
            
            else 
            {
                int ans = nums1[i];
                a.push_back(ans);
                i++;
                j++;
            }
        }
        
        return a;  