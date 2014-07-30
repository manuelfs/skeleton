#ifndef H_EVENT_HANDLER
#define H_EVENT_HANDLER

#include <vector>
#include <string>
#include <stdint.h>
#include "TChain.h"
#include "cfa.hpp"


class event_handler : public cfa{
public:
  event_handler(const std::string &filename);

  void analyze();

};

#endif
