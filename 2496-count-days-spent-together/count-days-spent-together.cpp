class Solution {
public:
    int convert(string s){
        int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        int m = stoi(s.substr(0, 2));
        int d = stoi(s.substr(3, 2));
        for(int i=0;i<m-1;i++){
            d+=days[i];
        }
        return d;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int start = max(convert(arriveAlice), convert(arriveBob));
        int end = min(convert(leaveAlice), convert(leaveBob));

        return max(0, end-start+1);
    }
};