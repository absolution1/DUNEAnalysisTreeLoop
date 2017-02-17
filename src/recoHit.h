#ifndef RECOHIT_H_SEEN
#define RECOHIT_H_SEEN
//STL
//ROOT
//CUSTOM

class RecoHit{
  public:
    RecoHit(
        Short_t  in_TPC,
        Short_t  in_Plane,
        Short_t  in_Wire,
        Short_t  in_Channel,
        Float_t  in_PeakT,
        Float_t  in_Charge,
        Float_t  in_PulseHeight,
        Float_t  in_StartTime,
        Float_t  in_EndTime,
        Float_t  in_RMS,
        Float_t  in_GoodnessOfFit,
        Short_t  in_Multiplicity,
        Float_t  in_TrueX,
        Float_t  in_NElectrons,
        Float_t  in_Energy,
        Short_t  in_TrackID,
        Short_t  in_TrackKey
        ) :
          TPC          (in_TPC),
          Plane        (in_Plane),
          Wire         (in_Wire),
          Channel      (in_Channel),
          PeakT        (in_PeakT),
          Charge       (in_Charge),
          PulseHeight  (in_PulseHeight),
          StartTime    (in_StartTime),
          EndTime      (in_EndTime),
          RMS          (in_RMS),
          GoodnessOfFit(in_GoodnessOfFit),
          Multiplicity (in_Multiplicity),
          TrueX        (in_TrueX),
          NElectrons   (in_NElectrons),
          Energy       (in_Energy),
          TrackID      (in_TrackID),
          TrackKey     (in_TrackKey) {}; //Constructor



    Short_t  TPC;        //tpc number
    Short_t  Plane;      //plane number
    Short_t  Wire;       //wire number
    Short_t  Channel;    //channel ID
    Float_t  PeakT;      //peak time
    Float_t  Charge;     //charge (area)
    Float_t  PulseHeight;         //amplitude
    Float_t  StartTime;     //hit start time
    Float_t  EndTime;       //hit end time
    Float_t  RMS;       //hit rms from the hit object
    Float_t  GoodnessOfFit; //chi2/dof goodness of fit 
    Short_t  Multiplicity;  //multiplicity of the given hit					 
    Float_t  TrueX;      // hit true X (cm)
    Float_t  NElectrons;     //hit number of electrons
    Float_t  Energy;       //hit energy
    Short_t  TrackID;      //is this hit associated with a reco track?
    Short_t  TrackKey;      //is this hit associated with a reco track,  if so associate a unique track key ID?

  private:
};
#endif
