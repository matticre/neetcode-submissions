class Solution {
public:
    int calPoints(vector<string>& operations) {
        std::vector<int> record;
        for (int i = 0; i < operations.size(); i++){
            if (operations[i]=="+" && i > 1){
                int n = record.size();
                record.push_back( record[n-1] + record[n-2]);
            }
            else if (operations[i]=="C" && i > 0)
                record.pop_back();
            else if (operations[i]=="D" && i > 0)
                record.push_back(2 * record.back());
            else 
                record.push_back(stoi(operations[i]));
        }

        return std::accumulate(record.begin(), record.end(),0);

    }
};