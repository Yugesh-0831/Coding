#include <iostream>
using namespace std;

class ShowTicket {
    string row;
    string seat_num;
    bool sold;
public:
    ShowTicket(string row = "-1",
               string seat_num = "-1",
               bool sold = false)
               :row(row),
               seat_num(seat_num),
               sold(sold){}
    bool is_sold(string new_row, string new_seat_num){return sold;}
    void sell_seat(string new_row, string new_seat_num){row = new_row; seat_num = new_seat_num; sold= true;}
    string print_ticket(string row, string seat_num) {
        string s;
        sold ? s = "sold" : s = "available";
        return row + " " + seat_num + " " + s;
    }
};

int main() {
    ShowTicket myticket;

    if(!myticket.is_sold("AA","101"))
        myticket.sell_seat("AA","101");

    cout << myticket.print_ticket("AA","101") << endl;
    cout << myticket.print_ticket("AA","102") << endl;
    return 0;
}