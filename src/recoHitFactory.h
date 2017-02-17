//STL
#include <iostream>
#include <algorithm>
//ROOT
#include "TTree.h"
//CUSTOM
#include "definitions.h"

class RecoHitFactory{
  public:
    RecoHitFactory(TTree *tree);
    //std::vector<RecoHit> GetParticleVector();
    void Print();
    UInt_t GetNRecoHits() { return fNRecoHits; };
    //RecoHit GetRecoHit(unsigned int index);

  private:
    Int_t    fNRecoHits;                  //number of hits
    //Int_t    no_hits_stored;                  //number of hits actually stored in the tree    
    Short_t  hit_tpc[GlobalDefs::kNMaxRecoHits];        //tpc number
    Short_t  hit_plane[GlobalDefs::kNMaxRecoHits];      //plane number
    Short_t  hit_wire[GlobalDefs::kNMaxRecoHits];       //wire number
    Short_t  hit_channel[GlobalDefs::kNMaxRecoHits];    //channel ID
    Float_t  hit_peakT[GlobalDefs::kNMaxRecoHits];      //peak time
    Float_t  hit_charge[GlobalDefs::kNMaxRecoHits];     //charge (area)
    Float_t  hit_ph[GlobalDefs::kNMaxRecoHits];         //amplitude
    Float_t  hit_startT[GlobalDefs::kNMaxRecoHits];     //hit start time
    Float_t  hit_endT[GlobalDefs::kNMaxRecoHits];       //hit end time
    Float_t  hit_rms[GlobalDefs::kNMaxRecoHits];       //hit rms from the hit object
    Float_t  hit_goodnessOfFit[GlobalDefs::kNMaxRecoHits]; //chi2/dof goodness of fit 
    Short_t  hit_multiplicity[GlobalDefs::kNMaxRecoHits];  //multiplicity of the given hit					 
    Float_t  hit_trueX[GlobalDefs::kNMaxRecoHits];      // hit true X (cm)
    Float_t  hit_nelec[GlobalDefs::kNMaxRecoHits];     //hit number of electrons
    Float_t  hit_energy[GlobalDefs::kNMaxRecoHits];       //hit energy
    Short_t  hit_trkid[GlobalDefs::kNMaxRecoHits];      //is this hit associated with a reco track?
    Short_t  hit_trkKey[GlobalDefs::kNMaxRecoHits];      //is this hit associated with a reco track,  if so associate a unique track key ID?
    /*
    UInt_t fNRecoHits;
    Int_t fpdg[GlobalDefs::kNMaxRecoHits];
    Int_t fStatus[GlobalDefs::kNMaxRecoHits];
    Float_t fMass[GlobalDefs::kNMaxRecoHits];
    Float_t fEng[GlobalDefs::kNMaxRecoHits];
    Float_t fEndE[GlobalDefs::kNMaxRecoHits];
    Float_t fPx[GlobalDefs::kNMaxRecoHits];
    Float_t fPy[GlobalDefs::kNMaxRecoHits];
    Float_t fPz[GlobalDefs::kNMaxRecoHits];
    Float_t fP[GlobalDefs::kNMaxRecoHits];
    Float_t fStartPointx[GlobalDefs::kNMaxRecoHits];
    Float_t fStartPointy[GlobalDefs::kNMaxRecoHits];
    Float_t fStartPointz[GlobalDefs::kNMaxRecoHits];
    Float_t fStartT[GlobalDefs::kNMaxRecoHits];
    Float_t fEndPointx[GlobalDefs::kNMaxRecoHits];
    Float_t fEndPointy[GlobalDefs::kNMaxRecoHits];
    Float_t fEndPointz[GlobalDefs::kNMaxRecoHits];
    Float_t ftheta[GlobalDefs::kNMaxRecoHits];
    Float_t fphi[GlobalDefs::kNMaxRecoHits];
    Float_t ftheta_xz[GlobalDefs::kNMaxRecoHits];
    Float_t ftheta_yz[GlobalDefs::kNMaxRecoHits];
    Float_t fpathlen[GlobalDefs::kNMaxRecoHits];
    Int_t finTPCActive[GlobalDefs::kNMaxRecoHits];
    Int_t fNumberDaughters[GlobalDefs::kNMaxRecoHits];
    Int_t fMother[GlobalDefs::kNMaxRecoHits];
    Int_t fTrackId[GlobalDefs::kNMaxRecoHits];
    Int_t fMergedId[GlobalDefs::kNMaxRecoHits];
    Int_t forigin[GlobalDefs::kNMaxRecoHits];
    Int_t fMCTruthIndex[GlobalDefs::kNMaxRecoHits];
    */







    //Int_t fRecoHitTrackID[GlobalDefs::kNMaxRecoHits];
    //Int_t fRecoHitPDG[GlobalDefs::kNMaxRecoHits];
    //UInt_t fRecoHitNumberDaughters[GlobalDefs::kNMaxRecoHits];
    //Int_t fRecoHitDaughterIDs[GlobalDefs::kNMaxRecoHits][GlobalDefs::kNMaxRecoHitDaughters];
    //Double_t fRecoHitStartPositionT[GlobalDefs::kNMaxRecoHits];
    //Double_t fRecoHitStartPositionX[GlobalDefs::kNMaxRecoHits];
    //Double_t fRecoHitStartPositionY[GlobalDefs::kNMaxRecoHits];
    //Double_t fRecoHitStartPositionZ[GlobalDefs::kNMaxRecoHits];
    //Double_t fRecoHitEndPositionT[GlobalDefs::kNMaxRecoHits];
    //Double_t fRecoHitEndPositionX[GlobalDefs::kNMaxRecoHits];
    //Double_t fRecoHitEndPositionY[GlobalDefs::kNMaxRecoHits];
    //Double_t fRecoHitEndPositionZ[GlobalDefs::kNMaxRecoHits];
    //Double_t fRecoHitStartMomentumT[GlobalDefs::kNMaxRecoHits];
    //Double_t fRecoHitStartMomentumX[GlobalDefs::kNMaxRecoHits];
    //Double_t fRecoHitStartMomentumY[GlobalDefs::kNMaxRecoHits];
    //Double_t fRecoHitStartMomentumZ[GlobalDefs::kNMaxRecoHits];
    //Double_t fRecoHitEndMomentumT[GlobalDefs::kNMaxRecoHits];
    //Double_t fRecoHitEndMomentumX[GlobalDefs::kNMaxRecoHits];
    //Double_t fRecoHitEndMomentumY[GlobalDefs::kNMaxRecoHits];
    //Double_t fRecoHitEndMomentumZ[GlobalDefs::kNMaxRecoHits];
    //Bool_t fRecoHitStopsInTPC[GlobalDefs::kNMaxRecoHits];
    //UInt_t fRecoHitNTPCs[GlobalDefs::kNMaxRecoHits];
    //Int_t fRecoHitTPCIDs[GlobalDefs::kNMaxRecoHits][GlobalDefs::kNMaxRecoHitTPCs];
    //UInt_t fRecoHitNCounters[GlobalDefs::kNMaxRecoHits]; 
    //Int_t fRecoHitCounterIDs[GlobalDefs::kNMaxRecoHits][GlobalDefs::kNMaxRecoHitCounters];
    //Bool_t fRecoHitUsesEastCounter[GlobalDefs::kNMaxRecoHits];
    //Bool_t fRecoHitUsesWestCounter[GlobalDefs::kNMaxRecoHits];

};
