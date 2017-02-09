#ifndef H_INPUTMANAGER_SEEN
#define H_INPUTMANAGER_SEEN
//STL
#include <fstream>
#include <limits>
#include <string>
#include <iostream>
//ROOT
#include "TChain.h"
//CUSTOM

class InputManager {
  public:
    InputManager(std::string list_name);
    bool GetNextFile(); //returns true if there is another file to get
    TChain* GetCurrentFile() { return fChain; };

  private:
    std::fstream fFileList; //The list of files
    TChain *fChain; //The current file to be looked at
};
#endif
