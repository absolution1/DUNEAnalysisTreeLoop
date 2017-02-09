#include "MCParticleFactory.h"

MCParticleFactory::MCParticleFactory::MCParticleFactory(TTree *tree){
  tree->SetBranchAddress("geant_list_size",&fNMCParticles   );
  tree->SetBranchAddress("pdg",            &fpdg            );
  tree->SetBranchAddress("status",         &fStatus         );
  tree->SetBranchAddress("Mass",           &fMass           );
  tree->SetBranchAddress("Eng",            &fEng            );
  tree->SetBranchAddress("EndE",           &fEndE           );
  tree->SetBranchAddress("Px",             &fPx             );
  tree->SetBranchAddress("Py",             &fPy             );
  tree->SetBranchAddress("Pz",             &fPz             );
  tree->SetBranchAddress("P",              &fP              );
  tree->SetBranchAddress("StartPointx",    &fStartPointx    );
  tree->SetBranchAddress("StartPointy",    &fStartPointy    );
  tree->SetBranchAddress("StartPointz",    &fStartPointz    );
  tree->SetBranchAddress("StartT",         &fStartT         );
  tree->SetBranchAddress("EndPointx",      &fEndPointx      );
  tree->SetBranchAddress("EndPointy",      &fEndPointy      );
  tree->SetBranchAddress("EndPointz",      &fEndPointz      );
  tree->SetBranchAddress("theta",          &ftheta          );
  tree->SetBranchAddress("phi",            &fphi            );
  tree->SetBranchAddress("theta_xz",       &ftheta_xz       );
  tree->SetBranchAddress("theta_yz",       &ftheta_yz       );
  tree->SetBranchAddress("pathlen",        &fpathlen        );
  tree->SetBranchAddress("inTPCActive",    &finTPCActive    );
  tree->SetBranchAddress("NumberDaughters",&fNumberDaughters);
  tree->SetBranchAddress("Mother",         &fMother         );
  tree->SetBranchAddress("TrackId",        &fTrackId        );
  tree->SetBranchAddress("MergedId",        &fMergedId      );
  tree->SetBranchAddress("origin",         &forigin         );
  tree->SetBranchAddress("MCTruthIndex",   &fMCTruthIndex   );
}

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

MCParticle MCParticleFactory::GetMCParticle(unsigned int index){
  MCParticle particle(
        fpdg[index],
        fStatus[index],
        fMass[index],
        fEng[index],
        fEndE[index],
        fPx[index],
        fPy[index],
        fPz[index],
        fP[index],
        fStartPointx[index],
        fStartPointy[index],
        fStartPointz[index],
        fStartT[index],
        fEndPointx[index],
        fEndPointy[index],
        fEndPointz[index],
        //ftheta[index],
        //fphi[index],
        //ftheta_xz[index],
        //ftheta_yz[index],
        //fpathlen[index],
        //finTPCActive[index],
        fNumberDaughters[index],
        fMother[index],
        fTrackId[index],
        fMergedId[index],
        //forigin[index],
        fMCTruthIndex[index]
      );

  return particle;
}
