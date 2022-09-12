#include "GammaKnifeEventAction.hh"

GammaKnifeEventAction::GammaKnifeEventAction()
: G4UserEventAction()
{
}

GammaKnifeEventAction::~GammaKnifeEventAction()
{
}

void GammaKnifeEventAction::BeginOfEventAction(const G4Event*)
{
  edep1 = 0.;
}

void GammaKnifeEventAction::EndOfEventAction(const G4Event*)
{
  G4AnalysisManager* analysisManager = G4AnalysisManager::Instance();

  analysisManager -> FillNtupleDColumn(1, 0, edep1);
  analysisManager -> AddNtupleRow(1);
}
