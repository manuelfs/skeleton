#include "event_handler.hpp"
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;
event_handler::event_handler(const std::string &fileName):
  cfa(fileName){
  cout<<endl<<"Opening "<<fileName<<endl;
}

void event_handler::analyze(){
  long entries = GetTotalEntries();
  for(unsigned entry(0); entry < entries; entry++){
    GetEntry(entry);

    cout<<"Event "<<entry+1<<" has "<<Nmus<<" muons with pt: ";
    for(unsigned imu(0); imu < mus_pt->size(); imu++) cout<<mus_pt->at(imu)<<"  ";
    cout<<endl;
  }
  cout<<endl;

}
