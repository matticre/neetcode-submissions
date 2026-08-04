class KthLargest {
private:
    std::vector<int> m_heap;
    int m_k;
public:
    KthLargest(int k, vector<int>& nums) {
        m_heap = nums;
        make_heap(m_heap.begin(), m_heap.end());
        m_k = k;
    }
    
    int add(int val) {
        m_heap.push_back(val);
        make_heap(m_heap.begin(), m_heap.end());
        int count = 0;
        while (count < m_k - 1){
            pop_heap(m_heap.begin(), m_heap.end() - count);
            count++;
        }

        int res = m_heap[0];
        make_heap(m_heap.begin(), m_heap.end());
        return res;
    }
};
