#ifndef MCPARTICLE_H_SEEN
#define MCPARTICLE_H_SEEN
//STL
//ROOT
#include "TLorentzVector.h"
//CUSTOM
#include "definitions.h"

class MCParticle{
  public:
    MCParticle(
        Int_t in_pdg,
        Int_t in_Status,
        Float_t in_Mass,
        Float_t in_Eng,
        Float_t in_EndE,
        Float_t in_Px,
        Float_t in_Py,
        Float_t in_Pz,
        Float_t in_P,
        Float_t in_StartPointx,
        Float_t in_StartPointy,
        Float_t in_StartPointz,
        Float_t in_StartT,
        Float_t in_EndPointx,
        Float_t in_EndPointy,
        Float_t in_EndPointz,
        //Float_t in_theta,
        //Float_t in_phi,
        //Float_t in_theta_xz,
        //Float_t in_theta_yz,
        //Float_t in_pathlen,
        //Int_t in_inTPCActive,
        Int_t in_NumberDaughters,
        Int_t in_Mother,
        Int_t in_TrackId,
        Int_t in_MergedId,
        //Int_t in_origin,
        Int_t in_MCTruthIndex
          ) : 
            PDG(in_pdg),
            Status(in_Status),
            Mass(in_Mass),
            EndE(in_EndE),
            StartMomentum(in_Px,in_Py,in_Pz,in_Eng),
            StartPosition(in_StartPointx,in_StartPointy,in_StartPointz,in_StartT),
            EndPosition(in_EndPointx,in_EndPointy,in_EndPointz),
            NumberDaughters(in_NumberDaughters),
            Mother(in_Mother),
            TrackId(in_TrackId),
            MergedId(in_MergedId),
            MCTruthIndex(in_MCTruthIndex) {};

    Int_t PDG;
    Int_t Status;
    Double_t Mass;
    Double_t EndE;
    TLorentzVector StartMomentum;
    TLorentzVector StartPosition;
    TVector3 EndPosition;
    Int_t NumberDaughters;
    Int_t Mother;
    Int_t TrackId;
    Int_t MergedId;
    Int_t MCTruthIndex;

};
#endif
