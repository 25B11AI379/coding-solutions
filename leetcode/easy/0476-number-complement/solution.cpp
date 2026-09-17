class Solution {
public:
    int findComplement(int num) {
        string Okay = bitset<32>(num).to_string();
        Okay = Okay.substr(Okay.find('1'));
        string Sayonara;
        for (char ch : Okay) {
            Sayonara += (ch == '0') ? '1' : '0';
        }
        int result = stoi(Sayonara, nullptr, 2);
        return result;
    }
};