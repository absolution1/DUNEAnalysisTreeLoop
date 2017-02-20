//STL
#include <iostream>
#include <vector>
#include <map>
//ROOT
#include "TTree.h"
#include "TString.h"
//CUSTOM
#include "definitions.h"
#include "recoTrack.h"
#include "recoHit.h"

class RecoTrackFactory{
  public:
    RecoTrackFactory(TTree *tree, TString reco_label);
    void Print();

    Short_t fNRecoTracks;

    //PlaneData [NTracks][NPlanes]
    //HitData [NTracks][NPlanes][NHits]
    //HitCoordData [NTracks][NPlanes][NHits][3]
    //TrackData [NTracks]

    //PlaneData
    Float_t    trkke[GlobalDefs::kNMaxRecoTracks][3];
    Float_t    trkrange[GlobalDefs::kNMaxRecoTracks][3];
    Int_t      trkidtruth[GlobalDefs::kNMaxRecoTracks][3];  //true geant trackid
    Short_t    trkorigin[GlobalDefs::kNMaxRecoTracks][3];   //_ev_origin 0: unknown, 1: neutrino, 2: cosmic, 3: supernova, 4: singles
    Int_t      trkpdgtruth[GlobalDefs::kNMaxRecoTracks][3]; //true pdg code
    Float_t    trkefftruth[GlobalDefs::kNMaxRecoTracks][3]; //completeness
    Float_t    trkpurtruth[GlobalDefs::kNMaxRecoTracks][3]; //purity of track
    Float_t    trkpitchc[GlobalDefs::kNMaxRecoTracks][3];
    Short_t    ntrkhits[GlobalDefs::kNMaxRecoTracks][3];

    //HitData
    Float_t      trkdedx[GlobalDefs::kNMaxRecoTracks][3][GlobalDefs::kNMaxRecoTrackHits];
    Float_t      trkdqdx[GlobalDefs::kNMaxRecoTracks][3][GlobalDefs::kNMaxRecoTrackHits];
    Float_t      trkresrg[GlobalDefs::kNMaxRecoTracks][3][GlobalDefs::kNMaxRecoTrackHits];
    Int_t        trktpc[GlobalDefs::kNMaxRecoTracks][3][GlobalDefs::kNMaxRecoTrackHits];

    //HitCoordData
    Float_t trkxyz[GlobalDefs::kNMaxRecoTracks][3][GlobalDefs::kNMaxRecoTrackHits][3];

    //TrackData
    Short_t trkId[GlobalDefs::kNMaxRecoTracks];
    Short_t trkncosmictags_tagger[GlobalDefs::kNMaxRecoTracks];
    Float_t trkcosmicscore_tagger[GlobalDefs::kNMaxRecoTracks];
    Short_t trkcosmictype_tagger[GlobalDefs::kNMaxRecoTracks];
    Short_t trkncosmictags_containmenttagger[GlobalDefs::kNMaxRecoTracks];
    Float_t trkcosmicscore_containmenttagger[GlobalDefs::kNMaxRecoTracks];
    Short_t trkcosmictype_containmenttagger[GlobalDefs::kNMaxRecoTracks];
    Short_t trkncosmictags_flashmatch[GlobalDefs::kNMaxRecoTracks];
    Float_t trkcosmicscore_flashmatch[GlobalDefs::kNMaxRecoTracks];
    Short_t trkcosmictype_flashmatch[GlobalDefs::kNMaxRecoTracks];
    Float_t trkstartx[GlobalDefs::kNMaxRecoTracks];     // starting x position.
    Float_t trkstarty[GlobalDefs::kNMaxRecoTracks];     // starting y position.
    Float_t trkstartz[GlobalDefs::kNMaxRecoTracks];     // starting z position.
    Float_t trkstartd[GlobalDefs::kNMaxRecoTracks];     // starting distance to boundary.
    Float_t trkendx[GlobalDefs::kNMaxRecoTracks];       // ending x position.
    Float_t trkendy[GlobalDefs::kNMaxRecoTracks];       // ending y position.
    Float_t trkendz[GlobalDefs::kNMaxRecoTracks];       // ending z position.
    Float_t trkendd[GlobalDefs::kNMaxRecoTracks];       // ending distance to boundary.
    Float_t trkflashT0[GlobalDefs::kNMaxRecoTracks];   // t0 per track from matching tracks to flashes (in ns)
    Float_t trktrueT0[GlobalDefs::kNMaxRecoTracks];    // t0 per track from truth information (in ns)
    Float_t trkpurity[GlobalDefs::kNMaxRecoTracks];    // track purity based on hit information
    Float_t trkcompleteness[GlobalDefs::kNMaxRecoTracks]; //track completeness based on hit information
    int trkg4id[GlobalDefs::kNMaxRecoTracks];        //true g4 track id for the reconstructed track
    int trkorig[GlobalDefs::kNMaxRecoTracks];        //origin of the track 
    Float_t trktheta[GlobalDefs::kNMaxRecoTracks];      // theta.
    Float_t trkphi[GlobalDefs::kNMaxRecoTracks];        // phi.
    Float_t trkstartdcosx[GlobalDefs::kNMaxRecoTracks];
    Float_t trkstartdcosy[GlobalDefs::kNMaxRecoTracks];
    Float_t trkstartdcosz[GlobalDefs::kNMaxRecoTracks];
    Float_t trkenddcosx[GlobalDefs::kNMaxRecoTracks];
    Float_t trkenddcosy[GlobalDefs::kNMaxRecoTracks];
    Float_t trkenddcosz[GlobalDefs::kNMaxRecoTracks];
    Float_t trkthetaxz[GlobalDefs::kNMaxRecoTracks];    // theta_xz.
    Float_t trkthetayz[GlobalDefs::kNMaxRecoTracks];    // theta_yz.
    Float_t trkmom[GlobalDefs::kNMaxRecoTracks];        // momentum.
    Float_t trklen[GlobalDefs::kNMaxRecoTracks];        // length.
    Float_t trkmomrange[GlobalDefs::kNMaxRecoTracks];    // track momentum from range using CSDA tables
    Float_t trkmommschi2[GlobalDefs::kNMaxRecoTracks];   // track momentum from multiple scattering Chi2 method
    Float_t trkmommsllhd[GlobalDefs::kNMaxRecoTracks];   // track momentum from multiple scattering LLHD method
    Short_t trksvtxid[GlobalDefs::kNMaxRecoTracks];     // Vertex ID associated with the track start
    Short_t trkevtxid[GlobalDefs::kNMaxRecoTracks];     // Vertex ID associated with the track end

    //PlaneData
    Int_t trkpidpdg[GlobalDefs::kNMaxRecoTracks][3];       // particle PID pdg code
    Float_t trkpidchi[GlobalDefs::kNMaxRecoTracks][3];
    Float_t trkpidchipr[GlobalDefs::kNMaxRecoTracks][3];   // particle PID chisq for proton
    Float_t trkpidchika[GlobalDefs::kNMaxRecoTracks][3];   // particle PID chisq for kaon
    Float_t trkpidchipi[GlobalDefs::kNMaxRecoTracks][3];   // particle PID chisq for pion
    Float_t trkpidchimu[GlobalDefs::kNMaxRecoTracks][3];   // particle PID chisq for muon
    Float_t trkpidpida[GlobalDefs::kNMaxRecoTracks][3];    // particle PIDA

    //TrackData
    Float_t trkpidmvamu[GlobalDefs::kNMaxRecoTracks];   // particle MVA value for muon PID
    Float_t trkpidmvae[GlobalDefs::kNMaxRecoTracks];   // particle MVA value for electron PID
    Float_t trkpidmvapich[GlobalDefs::kNMaxRecoTracks];   // particle MVA value for charged pion PID
    Float_t trkpidmvaphoton[GlobalDefs::kNMaxRecoTracks];   // particle MVA value for photon PID
    Float_t trkpidmvapr[GlobalDefs::kNMaxRecoTracks];   // particle MVA value for proton PID
    Short_t trkpidbestplane[GlobalDefs::kNMaxRecoTracks]; // this is defined as the plane with most hits   

    //TrackData
    Short_t trkhasPFParticle[GlobalDefs::kNMaxRecoTracks]; // whether this belongs to a PFParticle 
    Short_t trkPFParticleID[GlobalDefs::kNMaxRecoTracks];  // if hasPFParticle, its ID




  private:

};
