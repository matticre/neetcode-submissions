class KthLargest {
private:
    std::priority_queue<int, std::vector<int>, std::greater<int>> m_heap;
    int m_k;
public:
    KthLargest(int k, vector<int>& nums) : m_k(k){
        for (const auto &num : nums)
            add(num);
    }
    
    int add(int val) {
        m_heap.push(val);

        if (m_heap.size() > m_k)
            m_heap.pop();
        
        return m_heap.top();
    }
};
