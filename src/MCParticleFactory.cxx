#include "MCParticleFactory.h"

MCParticleFactory::MCParticleFactory::MCParticleFactory(TTree *tree){

  tree->SetBranchAddress("geant_list_size",&fNMCParticles);
  tree->SetBranchAddress("pdg",&fpdg);
  tree->SetBranchAddress("status",&fStatus);
  tree->SetBranchAddress("Mass",&fMass);
  tree->SetBranchAddress("Eng",&fEng);
  tree->SetBranchAddress("EndE",           fEndE           );
  tree->SetBranchAddress("Px",             fPx             );
  tree->SetBranchAddress("Py",             fPy             );
  tree->SetBranchAddress("Pz",             fPz             );
  tree->SetBranchAddress("P",              fP              );
  tree->SetBranchAddress("StartPointx",    fStartPointx    );
  tree->SetBranchAddress("StartPointy",    fStartPointy    );
  tree->SetBranchAddress("StartPointz",    fStartPointz    );
  tree->SetBranchAddress("StartT",         fStartT         );
  tree->SetBranchAddress("EndPointx",      fEndPointx      );
  tree->SetBranchAddress("EndPointy",      fEndPointy      );
  tree->SetBranchAddress("EndPointz",      fEndPointz      );
  tree->SetBranchAddress("theta",          ftheta          );
  tree->SetBranchAddress("phi",            fphi            );
  tree->SetBranchAddress("theta_xz",       ftheta_xz       );
  tree->SetBranchAddress("theta_yz",       ftheta_yz       );
  tree->SetBranchAddress("pathlen",        fpathlen        );
  tree->SetBranchAddress("inTPCActive",    finTPCActive    );
  tree->SetBranchAddress("NumberDaughters",fNumberDaughters);
  tree->SetBranchAddress("Mother",         fMother         );
  tree->SetBranchAddress("TrackId",        fTrackId        );
  tree->SetBranchAddress("MergeId",        fMergeId        );
  tree->SetBranchAddress("origin",         forigin         );
  tree->SetBranchAddress("MCTruthIndex",   fMCTruthIndex   );








  /*
  tree->SetBranchAddress("NMCParticles",&fNMCParticles);
  tree->SetBranchAddress("MCParticleTrackID",&fMCParticleTrackID);
  tree->SetBranchAddress("MCParticlePDG",&fMCParticlePDG);
  tree->SetBranchAddress("MCParticleNumberDaughters",&fMCParticleNumberDaughters);
  tree->SetBranchAddress("MCParticleDaughterIDs",&fMCParticleDaughterIDs);
  tree->SetBranchAddress("MCParticleStartPositionT",&fMCParticleStartPositionT);
  tree->SetBranchAddress("MCParticleStartPositionX",&fMCParticleStartPositionX);
  tree->SetBranchAddress("MCParticleStartPositionY",&fMCParticleStartPositionY);
  tree->SetBranchAddress("MCParticleStartPositionZ",&fMCParticleStartPositionZ);
  tree->SetBranchAddress("MCParticleEndPositionT",&fMCParticleEndPositionT);
  tree->SetBranchAddress("MCParticleEndPositionX",&fMCParticleEndPositionX);
  tree->SetBranchAddress("MCParticleEndPositionY",&fMCParticleEndPositionY);
  tree->SetBranchAddress("MCParticleEndPositionZ",&fMCParticleEndPositionZ);
  tree->SetBranchAddress("MCParticleStartMomentumT",&fMCParticleStartMomentumT);
  tree->SetBranchAddress("MCParticleStartMomentumX",&fMCParticleStartMomentumX);
  tree->SetBranchAddress("MCParticleStartMomentumY",&fMCParticleStartMomentumY);
  tree->SetBranchAddress("MCParticleStartMomentumZ",&fMCParticleStartMomentumZ);
  tree->SetBranchAddress("MCParticleEndMomentumT",&fMCParticleEndMomentumT);
  tree->SetBranchAddress("MCParticleEndMomentumX",&fMCParticleEndMomentumX);
  tree->SetBranchAddress("MCParticleEndMomentumY",&fMCParticleEndMomentumY);
  tree->SetBranchAddress("MCParticleEndMomentumZ",&fMCParticleEndMomentumZ);
  tree->SetBranchAddress("MCParticleStopsInTPC",&fMCParticleStopsInTPC);
  tree->SetBranchAddress("MCParticleNTPCs",&fMCParticleNTPCs);
  tree->SetBranchAddress("MCParticleTPCIDs",&fMCParticleTPCIDs);
  tree->SetBranchAddress("MCParticleNCounters",&fMCParticleNCounters);
  tree->SetBranchAddress("MCParticleCounterIDs",&fMCParticleCounterIDs);
  tree->SetBranchAddress("MCParticleUsesEastCounters",&fMCParticleUsesEastCounter);
  tree->SetBranchAddress("MCParticleUsesWestCounters",&fMCParticleUsesWestCounter);
  */
}
/*

std::vector<MCParticle> MCParticleFactory::GetParticleVector(){
  std::vector<MCParticle> particle_vector;
  for (UInt_t i = 0; i < fNMCParticles; i++){
    //Create an MC particle
    particle_vector.push_back(MCParticle(
      fMCParticleTrackID[i],
      fMCParticlePDG[i],
      fMCParticleNumberDaughters[i],
      fMCParticleDaughterIDs[i],
      fMCParticleStartPositionT[i],
      fMCParticleStartPositionX[i],
      fMCParticleStartPositionY[i],
      fMCParticleStartPositionZ[i],
      fMCParticleEndPositionT[i],
      fMCParticleEndPositionX[i],
      fMCParticleEndPositionY[i],
      fMCParticleEndPositionZ[i],
      fMCParticleStartMomentumT[i],
      fMCParticleStartMomentumX[i],
      fMCParticleStartMomentumY[i],
      fMCParticleStartMomentumZ[i],
      fMCParticleEndMomentumT[i],
      fMCParticleEndMomentumX[i],
      fMCParticleEndMomentumY[i],
      fMCParticleEndMomentumZ[i],
      fMCParticleStopsInTPC[i],
      fMCParticleNTPCs[i],
      fMCParticleTPCIDs[i],
      fMCParticleNCounters[i],
      fMCParticleCounterIDs[i],
      fMCParticleUsesEastCounter[i],
      fMCParticleUsesWestCounter[i]
    ));
  }
  return particle_vector;
}
*/

void MCParticleFactory::Print(){
  std::cout<<"NParticles: " << fNMCParticles << std::endl;
  for (UInt_t i = 0; i < fNMCParticles; i++){
    std::cout<<i<<"--"<<fpdg[i] << std::endl;
    std::cout<<"--"<<fStatus[i] << std::endl;
    std::cout<<"--"<<fMass[i] << std::endl;
    std::cout<<"--"<<fEng[i] << std::endl;
    std::cout<<"---------" << std::endl;





  }
  return;
}
