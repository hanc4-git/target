#ifndef GAMMAKNIFEEVENTACTION_HH
#define GAMMAKNIFEEVENTACTION_HH

#include "G4UserEventAction.hh"
#include "G4Event.hh"
#include "globals.hh"
#include "g4root.hh"

class GammaKnifeEventAction : public G4UserEventAction
{
 public:
   GammaKnifeEventAction();
   virtual ~GammaKnifeEventAction();

   // method from the base class
   virtual void BeginOfEventAction(const G4Event *);
   virtual void EndOfEventAction(const G4Event *);

   void AddEnergyDeposit1(G4double edep) { edep1 += edep; }

  private:
    G4double edep1;
};

#endif
