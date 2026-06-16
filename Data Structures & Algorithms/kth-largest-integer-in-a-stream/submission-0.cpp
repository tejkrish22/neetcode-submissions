class KthLargest {
private:
    priority_queue<int, vector<int>, std::greater<int>> pq;
    int k;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (int x:nums) add(x);
    }
    
    int add(int val) {
        if (pq.size()>=k){
            if (val > pq.top()) {
                pq.pop();
                pq.push(val);
            }
        }
        else {
            pq.push(val);
        }
        return pq.top();
    }
};
