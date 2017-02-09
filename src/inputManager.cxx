#include "inputManager.h"

InputManager::InputManager::InputManager(std::string list_name)
  :
    fFileList(list_name)
{
  fChain = new TChain("analysistree/anatree");
}



bool InputManager::GetNextFile(){
  std::string file_name;
  bool success = std::getline(fFileList,file_name);
  if (!success){
    std::cout<<"No more files!"<<std::endl;
    fChain->ResetAfterMerge(NULL);
    return false;
  }

  std::cout<<"Loading file: " << file_name << std::endl;
  fChain->ResetAfterMerge(NULL);
  fChain->AddFile(file_name.c_str());
  //Check if the TChain has any branches after loading
  if (fChain->GetListOfBranches() == 0){
    std::cout<<"Found 0 branches in the TChain -> file is possibly missing the anatree TTree"<<std::endl;
    fChain->ResetAfterMerge(NULL);
    return false;
  }
  return true;
}
