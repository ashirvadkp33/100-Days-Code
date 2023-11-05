class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n=arr.size();
        queue<int>q;
        int maxi=arr[0];
        for(int i=1;i<n;i++)
        {   
            q.push(arr[i]);
            maxi=max(maxi,arr[i]);
        }

        int cur_element=arr[0],count=0;

        while(count!=k && cur_element!=maxi)
        {
            int x=q.front();
            if(cur_element > x)
            {
                count++;
                q.pop();
                q.push(x);
            }
            else{
                count=1;
                q.push(cur_element);
                cur_element=x;
                q.pop();

            }
        }
        return cur_element;
    }
};
