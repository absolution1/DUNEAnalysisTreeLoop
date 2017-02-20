#include "recoTrackFactory.h"

RecoTrackFactory::RecoTrackFactory::RecoTrackFactory(TTree *tree, TString reco_label){

  tree->SetBranchAddress("ntracks_"+reco_label,&fNRecoTracks);
  tree->SetBranchAddress("trkdedx_"+reco_label,&trkdedx);
  tree->SetBranchAddress("trkke_"+reco_label,&trkke);
  tree->SetBranchAddress("trkrange_"+reco_label,&trkrange);
  tree->SetBranchAddress("trkidtruth_"+reco_label,&trkidtruth);
  tree->SetBranchAddress("trkorigin_"+reco_label,&trkorigin);
  tree->SetBranchAddress("trkpdgtruth_"+reco_label,&trkpdgtruth);
  tree->SetBranchAddress("trkefftruth_"+reco_label,&trkefftruth);
  tree->SetBranchAddress("trkpurtruth_"+reco_label,&trkpurtruth);
  tree->SetBranchAddress("trkpitchc_"+reco_label,&trkpitchc);
  tree->SetBranchAddress("ntrkhits_"+reco_label,&ntrkhits);
  tree->SetBranchAddress("trkdedx_"+reco_label,&trkdedx);
  tree->SetBranchAddress("trkdqdx_"+reco_label,&trkdqdx);
  tree->SetBranchAddress("trkresrg_"+reco_label,&trkresrg);
  tree->SetBranchAddress("trktpc_"+reco_label,&trktpc);
  tree->SetBranchAddress("trkxyz_"+reco_label,&trkxyz);
  tree->SetBranchAddress("trkId_"+reco_label,&trkId);
  tree->SetBranchAddress("trkncosmictags_tagger_"+reco_label,&trkncosmictags_tagger);
  tree->SetBranchAddress("trkcosmicscore_tagger_"+reco_label,&trkcosmicscore_tagger);
  tree->SetBranchAddress("trkcosmictype_tagger_"+reco_label,&trkcosmictype_tagger);
  tree->SetBranchAddress("trkncosmictags_containmenttagger_"+reco_label,&trkncosmictags_containmenttagger);
  tree->SetBranchAddress("trkcosmicscore_containmenttagger_"+reco_label,&trkcosmicscore_containmenttagger);
  tree->SetBranchAddress("trkcosmictype_containmenttagger_"+reco_label,&trkcosmictype_containmenttagger);
  tree->SetBranchAddress("trkncosmictags_flashmatch_"+reco_label,&trkncosmictags_flashmatch);
  tree->SetBranchAddress("trkcosmicscore_flashmatch_"+reco_label,&trkcosmicscore_flashmatch);
  tree->SetBranchAddress("trkcosmictype_flashmatch_"+reco_label,&trkcosmictype_flashmatch);
  tree->SetBranchAddress("trkstartx_"+reco_label,&trkstartx);
  tree->SetBranchAddress("trkstarty_"+reco_label,&trkstarty);
  tree->SetBranchAddress("trkstartz_"+reco_label,&trkstartz);
  tree->SetBranchAddress("trkstartd_"+reco_label,&trkstartd);
  tree->SetBranchAddress("trkendx_"+reco_label,&trkendx);
  tree->SetBranchAddress("trkendy_"+reco_label,&trkendy);
  tree->SetBranchAddress("trkendz_"+reco_label,&trkendz);
  tree->SetBranchAddress("trkendd_"+reco_label,&trkendd);
  tree->SetBranchAddress("trkflashT0_"+reco_label,&trkflashT0);
  tree->SetBranchAddress("trktrueT0_"+reco_label,&trktrueT0);
  tree->SetBranchAddress("trkpurity_"+reco_label,&trkpurity);
  tree->SetBranchAddress("trkcompleteness_"+reco_label,&trkcompleteness);
  tree->SetBranchAddress("trkg4id_"+reco_label,&trkg4id);
  tree->SetBranchAddress("trkorig_"+reco_label,&trkorig);
  tree->SetBranchAddress("trktheta_"+reco_label,&trktheta);
  tree->SetBranchAddress("trkphi_"+reco_label,&trkphi);
  tree->SetBranchAddress("trkstartdcosx_"+reco_label,&trkstartdcosx);
  tree->SetBranchAddress("trkstartdcosy_"+reco_label,&trkstartdcosy);
  tree->SetBranchAddress("trkstartdcosz_"+reco_label,&trkstartdcosz);
  tree->SetBranchAddress("trkenddcosx_"+reco_label,&trkenddcosx);
  tree->SetBranchAddress("trkenddcosy_"+reco_label,&trkenddcosy);
  tree->SetBranchAddress("trkenddcosz_"+reco_label,&trkenddcosz);
  tree->SetBranchAddress("trkthetaxz_"+reco_label,&trkthetaxz);
  tree->SetBranchAddress("trkthetayz_"+reco_label,&trkthetayz);
  tree->SetBranchAddress("trkmom_"+reco_label,&trkmom);
  tree->SetBranchAddress("trklen_"+reco_label,&trklen);
  tree->SetBranchAddress("trkmomrange_"+reco_label,&trkmomrange);
  tree->SetBranchAddress("trkmommschi2_"+reco_label,&trkmommschi2);
  tree->SetBranchAddress("trkmommsllhd_"+reco_label,&trkmommsllhd);
  tree->SetBranchAddress("trksvtxid_"+reco_label,&trksvtxid);
  tree->SetBranchAddress("trkevtxid_"+reco_label,&trkevtxid);
  tree->SetBranchAddress("trkpidpdg_"+reco_label,&trkpidpdg);
  tree->SetBranchAddress("trkpidchi_"+reco_label,&trkpidchi);
  tree->SetBranchAddress("trkpidchipr_"+reco_label,&trkpidchipr);
  tree->SetBranchAddress("trkpidchika_"+reco_label,&trkpidchika);
  tree->SetBranchAddress("trkpidchipi_"+reco_label,&trkpidchipi);
  tree->SetBranchAddress("trkpidchimu_"+reco_label,&trkpidchimu);
  tree->SetBranchAddress("trkpidpida_"+reco_label,&trkpidpida);
  tree->SetBranchAddress("trkpidmvamu_"+reco_label,&trkpidmvamu);
  tree->SetBranchAddress("trkpidmvae_"+reco_label,&trkpidmvae);
  tree->SetBranchAddress("trkpidmvapich_"+reco_label,&trkpidmvapich);
  tree->SetBranchAddress("trkpidmvaphoton_"+reco_label,&trkpidmvaphoton);
  tree->SetBranchAddress("trkpidmvapr_"+reco_label,&trkpidmvapr);
  tree->SetBranchAddress("trkpidbestplane_"+reco_label,&trkpidbestplane);
  tree->SetBranchAddress("trkhasPFParticle_"+reco_label,&trkhasPFParticle);
  tree->SetBranchAddress("trkPFParticleID_"+reco_label,&trkPFParticleID);


}

    
     
   

void RecoTrackFactory::Print(){
  for (int i = 0; i < fNRecoTracks; i++){
    for (int j = 0; j < 3; j++){
      for (unsigned int k = 0; k < GlobalDefs::kNMaxRecoTrackHits; k++){
        std::cout<<"Track: " << i << "  Plane: " << j << "  Hit: " << k << "  dedx: " << trkdedx[i][j][k] << std::endl;
      }
    }
  }
  return;
}


