#include "MCNeutrinoFactory.h"

MCNeutrinoFactory::MCNeutrinoFactory::MCNeutrinoFactory(TTree *tree){
  tree->SetBranchAddress("mcevts_truth",&fNMCNeutrinos);
  tree->SetBranchAddress("nuPDG_truth",&nuPDG_truth);
  tree->SetBranchAddress("ccnc_truth",&ccnc_truth);
  tree->SetBranchAddress("mode_truth",&mode_truth);
  tree->SetBranchAddress("enu_truth",&enu_truth);
  tree->SetBranchAddress("Q2_truth",&Q2_truth);
  tree->SetBranchAddress("W_truth",&W_truth);
  tree->SetBranchAddress("X_truth",&X_truth);
  tree->SetBranchAddress("Y_truth",&Y_truth);
  tree->SetBranchAddress("hitnuc_truth",&hitnuc_truth);
  tree->SetBranchAddress("nuvtxx_truth",&nuvtxx_truth);
  tree->SetBranchAddress("nuvtxy_truth",&nuvtxy_truth);
  tree->SetBranchAddress("nuvtxz_truth",&nuvtxz_truth);
  tree->SetBranchAddress("nu_dcosx_truth",&nu_dcosx_truth);
  tree->SetBranchAddress("nu_dcosy_truth",&nu_dcosy_truth);
  tree->SetBranchAddress("nu_dcosz_truth",&nu_dcosz_truth);
  tree->SetBranchAddress("lep_mom_truth",&lep_mom_truth);
  tree->SetBranchAddress("lep_dcosx_truth",&lep_dcosx_truth);
  tree->SetBranchAddress("lep_dcosy_truth",&lep_dcosy_truth);
  tree->SetBranchAddress("lep_dcosz_truth",&lep_dcosz_truth);
  tree->SetBranchAddress("ntype_flux",&ntype_flux);
};

void MCNeutrinoFactory::Print(){
  for (unsigned int i = 0; i < fNMCNeutrinos; i++){
    std::cout<<"Nu PDG: " << nuPDG_truth[i] << std::endl;
  }
  return;
}

MCNeutrino MCNeutrinoFactory::GetMCNeutrino(unsigned int index){
  MCNeutrino neutrino(
      nuPDG_truth[index],
      ccnc_truth[index],
      mode_truth[index],
      enu_truth[index],
      Q2_truth[index],
      W_truth[index],
      X_truth[index],
      Y_truth[index],
      hitnuc_truth[index],
      nuvtxx_truth[index],
      nuvtxy_truth[index],
      nuvtxz_truth[index],
      nu_dcosx_truth[index],
      nu_dcosy_truth[index],
      nu_dcosz_truth[index],
      lep_mom_truth[index],
      lep_dcosx_truth[index],
      lep_dcosy_truth[index],
      lep_dcosz_truth[index],
      ntype_flux[index]
      );
  return neutrino;
}
