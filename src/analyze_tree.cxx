#include "event_handler.hpp"
#include <iostream>
#include <string>
#include <unistd.h>

int main(int argc, char *argv[]){
  std::string inFilename("");
  int c(0);
  while((c=getopt(argc, argv, "f:"))!=-1){
    switch(c){
    case 'f':
      inFilename=optarg;
      break;
    default:
      break;
    }
  }
  
  std::string outFilename("");
  
  size_t pos(inFilename.find(".root"));
  if(pos==std::string::npos){
    inFilename = inFilename + "*.root";
  }

  event_handler eh(inFilename);
  eh.analyze();
}
