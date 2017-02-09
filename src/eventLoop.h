//STL
#include <iostream>
#include <algorithm>
//ROOT
#include "TChain.h"
#include "TString.h"
//CUSTOM
#include "MCNeutrinoFactory.h"
#include "MCParticleFactory.h"
#include "recoTrackFactory.h"
#include "recoHitFactory.h"
#include "selector.h"
#include "truthUtils.h"
#include "outputManager.h"
#include "inputManager.h"

class EventLoop{
  public:
    EventLoop(std::string input_list);
    ~EventLoop();
    //void AddFile(TString file_name);
    void RunAndGun();

  private:

    InputManager fInputManager;
    //TChain *fChain;

    Int_t fRun;
    Int_t fSubRun;
    Int_t fEvent;

    void PrintEventNumber();
    Long64_t fGlobalEventNo;
};
