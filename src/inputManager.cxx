#include "inputManager.h"

InputManager::InputManager::InputManager(std::string list_name)
  :
    fFileList(list_name)
{
  fChain = new TChain("AnalysisTree/anatree");
}



bool InputManager::GetNextFile(){
  std::string file_name;
  bool success = std::getline(fFileList,file_name);
  if (!success){
    std::cout<<"No more files!"<<std::endl;
    fChain->Reset();
    return false;
  }

  std::cout<<"Loading file: " << file_name << std::endl;
  fChain->Reset();
  fChain->AddFile(file_name.c_str());
  return true;
}
