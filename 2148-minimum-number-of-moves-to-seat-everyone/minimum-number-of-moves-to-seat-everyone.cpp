class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int currseat=0;
        int minmoves=0;
        int i=0;
        int j=0;
        while(i<students.size() and j<seats.size())
        {
          
                minmoves+=abs(seats[i]-students[j]);
            i++;
            j++;
        }
        return minmoves;

    }
};