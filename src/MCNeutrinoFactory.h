//STL
#include <iostream>
//ROOT
#include "TTree.h"
//CUSTOM
#include "definitions.h"
#include "MCNeutrino.h"

class MCNeutrinoFactory {
  public:
    MCNeutrinoFactory(TTree *tree);
    UInt_t GetNMCNeutrinos() { return fNMCNeutrinos; };
    MCNeutrino GetMCNeutrino(unsigned int index);
    void Print();

  private:
    UInt_t    fNMCNeutrinos;
    Int_t     nuPDG_truth[GlobalDefs::kNMaxMCNeutrinos];     //neutrino PDG code
    Int_t     ccnc_truth[GlobalDefs::kNMaxMCNeutrinos];      //0=CC 1=NC
    Int_t     mode_truth[GlobalDefs::kNMaxMCNeutrinos];      //0=QE/El, 1=RES, 2=DIS, 3=Coherent production
    Float_t   enu_truth[GlobalDefs::kNMaxMCNeutrinos];       //true neutrino energy
    Float_t   Q2_truth[GlobalDefs::kNMaxMCNeutrinos];        //Momentum transfer squared
    Float_t   W_truth[GlobalDefs::kNMaxMCNeutrinos];         //hadronic invariant mass
    Float_t   X_truth[GlobalDefs::kNMaxMCNeutrinos];
    Float_t   Y_truth[GlobalDefs::kNMaxMCNeutrinos];
    Int_t     hitnuc_truth[GlobalDefs::kNMaxMCNeutrinos];    //hit nucleon
    Float_t   nuvtxx_truth[GlobalDefs::kNMaxMCNeutrinos];    //neutrino vertex x
    Float_t   nuvtxy_truth[GlobalDefs::kNMaxMCNeutrinos];    //neutrino vertex y
    Float_t   nuvtxz_truth[GlobalDefs::kNMaxMCNeutrinos];    //neutrino vertex z
    Float_t   nu_dcosx_truth[GlobalDefs::kNMaxMCNeutrinos];  //neutrino dcos x
    Float_t   nu_dcosy_truth[GlobalDefs::kNMaxMCNeutrinos];  //neutrino dcos y
    Float_t   nu_dcosz_truth[GlobalDefs::kNMaxMCNeutrinos];  //neutrino dcos z
    Float_t   lep_mom_truth[GlobalDefs::kNMaxMCNeutrinos];   //lepton momentum
    Float_t   lep_dcosx_truth[GlobalDefs::kNMaxMCNeutrinos]; //lepton dcos x
    Float_t   lep_dcosy_truth[GlobalDefs::kNMaxMCNeutrinos]; //lepton dcos y
    Float_t   lep_dcosz_truth[GlobalDefs::kNMaxMCNeutrinos]; //lepton dcos z
    Int_t     ntype_flux[GlobalDefs::kNMaxMCNeutrinos]; //Neutrino PDG at decay point
};
