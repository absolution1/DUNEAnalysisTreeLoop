//STL
//ROOT
#include "TVector3.h"
#include "TLorentzVector.h"
//CUSTOM

class MCNeutrino {
  public:
    MCNeutrino(
        Int_t    in_nuPDG,
        Int_t    in_ccnc,
        Int_t    in_mode,
        Float_t  in_enu,
        Float_t  in_Q2,
        Float_t  in_W,
        Float_t  in_X,
        Float_t  in_Y,
        Int_t    in_hitnuc,
        Float_t  in_nuvtxx,
        Float_t  in_nuvtxy,
        Float_t  in_nuvtxz,
        Float_t  in_nu_dcosx,
        Float_t  in_nu_dcosy,
        Float_t  in_nu_dcosz,
        Float_t  in_lep_mom,
        Float_t  in_lep_dcosx,
        Float_t  in_lep_dcosy,
        Float_t  in_lep_dcosz,
        Int_t    in_ntype
        ) :
          PDG(in_nuPDG),
          CCNC(in_ccnc),
          Mode(in_mode),
          Momentum(in_nu_dcosx*in_enu, in_nu_dcosy*in_enu, in_nu_dcosz*in_enu, in_enu),
          Q2(in_Q2),
          W(in_W),
          X(in_X),
          Y(in_Y),
          HitNucPDG(in_hitnuc),
          Position(in_nuvtxx, in_nuvtxy, in_nuvtxz),
          LeptonMomentum(in_lep_dcosx*in_lep_mom, in_lep_dcosy*in_lep_mom, in_lep_dcosz*in_lep_mom, in_lep_mom),
          BeamPDG(in_ntype) {};















    Int_t PDG;
    Bool_t CCNC;
    Int_t Mode;
    TLorentzVector Momentum;
    Double_t Q2;
    Double_t W;
    Double_t X;
    Double_t Y;
    Int_t HitNucPDG;
    TVector3 Position;
    TLorentzVector LeptonMomentum;
    Int_t BeamPDG;

  private:
};
