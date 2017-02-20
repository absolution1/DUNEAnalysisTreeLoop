#include "eventLoop.h"

EventLoop::EventLoop::EventLoop(std::string input_list)
  :
    fInputManager(input_list),
    fGlobalEventNo(0){}

EventLoop::~EventLoop(){
}

//void EventLoop::AddFile(TString file_name){
//  fChain->Add(file_name);
//  return;
//}

void EventLoop::RunAndGun(){

  TTree *current_tree = fInputManager.GetCurrentFile();
  MCParticleFactory particle_factory(current_tree);
  MCNeutrinoFactory neutrino_factory(current_tree);
  RecoHitFactory recohit_factory(current_tree);

  RecoTrackFactory *recotrack_factory = new RecoTrackFactory(current_tree,"pmtrack");
  while(fInputManager.GetNextFile()){

    for (UInt_t i_entry = 0; i_entry < current_tree->GetEntries(); i_entry++){

      current_tree->GetEntry(i_entry);
     // recotrack_factory->Print();
    }
  }
  /*
  AddFile(file_name);
  //Initialise the factories
  MCParticleFactory truth_factory(fChain);
  RecoTrackFactory reco_factory(fChain);
  RecoHitFactory hit_factory(fChain);

  //Create the selector
  Selector selector;

  //Create the output manager
  //OutputManager output_manager("output.root");

  //Get the information to start the loop
  Long64_t NEvents = fChain->GetEntries();
  //std::cout<<"Number of events to loop over: " << NEvents << std::endl;
  for (Long64_t eventno = 0; eventno < NEvents; eventno++){
    try{
      PrintEventNumber();
      fChain->GetEntry(eventno);
      std::vector<RecoHit> reco_hits = hit_factory.GetRecoHitVector();
  


      //output_manager.FillEvTree();
    }

    catch(...){
      std::cout<<"Caught exception -- Run: " << fRun << " SubRun: " << fSubRun << " Event: " << fEvent << std::endl;
      std::cout<<"Exiting"<<std::endl;
      return;
    }

  }

  fChain->Reset();
  */
  return;
}



void EventLoop::PrintEventNumber(){
  //if (fGlobalEventNo<10) return;
  Long64_t holder = fGlobalEventNo;
  int order = 0;
  while (holder > 0){
    holder/=10;
    order++;
  }
  int mag = 1;
  for (int i = 0; i < std::min(order-1,4); i++){
    mag*=10;
  }
  if (fGlobalEventNo % mag == 0) std::cout<<"Loop has reached event: " << fGlobalEventNo << std::endl;
  fGlobalEventNo++;

  return;
}
