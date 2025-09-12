class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<string> validBusiness = {"electronics", "grocery", "pharmacy", "restaurant"};
        unordered_map<string, int> priority = {{"electronics", 0}, {"grocery", 1}, {"pharmacy", 2}, {"restaurant", 3}};
        vector<pair<pair<int, string>, string>> validCoupons;

        int n = code.size();
        for (int i = 0; i < n; i++) {
            // Condition 1: check code[i] is not empty and only alphanumeric/underscore
            if (code[i].empty()) continue;
            bool isValidCode = true;
            for (char c : code[i]) {
                if (!isalnum(c) && c != '_') {
                    isValidCode = false;
                    break;
                }
            }
            if (!isValidCode) continue;

            // Condition 2: check valid business line
            if (priority.find(businessLine[i]) == priority.end()) continue;

            // Condition 3: isActive[i] must be true
            if (!isActive[i]) continue;

            // Add to validCoupons with sorting priority
            validCoupons.push_back({{priority[businessLine[i]], code[i]}, code[i]});
        }

        // Sort by (business priority, code lexicographically)
        sort(validCoupons.begin(), validCoupons.end());

        // Extract only codes
        vector<string> result;
        for (auto& p : validCoupons) {
            result.push_back(p.second);
        }

        return result;
    }
};