#include "recoHitFactory.h"

RecoHitFactory::RecoHitFactory::RecoHitFactory(TTree *tree){
  tree->SetBranchAddress("no_hits", &fNRecoHits);
  tree->SetBranchAddress("hit_tpc"               , &hit_tpc);
  tree->SetBranchAddress("hit_plane"             , &hit_plane);
  tree->SetBranchAddress("hit_wire"              , &hit_wire);
  tree->SetBranchAddress("hit_channel"           , &hit_channel);
  tree->SetBranchAddress("hit_peakT"             , &hit_peakT);
  tree->SetBranchAddress("hit_charge"            , &hit_charge);
  tree->SetBranchAddress("hit_ph"                , &hit_ph);
  tree->SetBranchAddress("hit_startT"            , &hit_startT);
  tree->SetBranchAddress("hit_endT"              , &hit_endT);
  tree->SetBranchAddress("hit_rms"               , &hit_rms);
  tree->SetBranchAddress("hit_goodnessOfFit"     , &hit_goodnessOfFit);
  tree->SetBranchAddress("hit_multiplicity"      , &hit_multiplicity);
  tree->SetBranchAddress("hit_trueX"             , &hit_trueX);
  tree->SetBranchAddress("hit_nelec"             , &hit_nelec);
  tree->SetBranchAddress("hit_energy"            , &hit_energy);
  tree->SetBranchAddress("hit_trkid"             , &hit_trkid);
  tree->SetBranchAddress("hit_trkKey"            , &hit_trkKey);
}

void RecoHitFactory::Print(){
  for (int i = 0; i < fNRecoHits; i++){
    std::cout<<"Hit: " << i << "  ph: " << hit_ph[i] << std::endl;
  }
  return;
}

