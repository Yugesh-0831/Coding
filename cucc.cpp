
#include <iostream>
using namespace std;


class ShowTickets{



string row;
string seat_number;
bool sold_status;
    
    // int count;
//
//    void check_count()
//    {
//       if(++count > 10)
//           throw("Error: Object creation exceeded.");
//    }
public:


   ShowTickets(): sold_status(false)//, count(0)
         {  
         }
    
//ShowTickets(string rows,string seatnumber){
//
//row=rows;
//seat_number=seatnumber;
//sold_status=false;
//}



bool is_sold(string rows, string seatnumber){
    
    this->row=rows;
    this->seat_number=seatnumber;
    
return this->sold_status;
}

void sell_seat(string rows, string seatnumber){

  this->row=rows;
  this->seat_number=seatnumber;
    //if(count <=10){
    this->sold_status = true;
    //
    // else{
    //     cout<<"ticket limit exceeded";
    // }
}

string print_ticket(string rows, string seatnumber){

string status;
    
    this->row=rows;
    this->seat_number=seatnumber;
  
    string s;
    this->sold_status ? s = "sold" : s = "available";
    return row + " " + seat_number + " " + s;
}

};

int main () {
  ShowTickets myticket;
  if(!myticket.is_sold("AA","101"))
    myticket.sell_seat ("AA","101");
  cout << myticket.print_ticket("AA","101") << endl;
  cout << myticket.print_ticket("AA","102") << endl;
  return 0;
}