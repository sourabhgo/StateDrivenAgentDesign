#include "Locations.h"
#include "Miner.h"
#include "ConsoleUtils.h"
#include "EntityNames.h"

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
  //create a miner
  Miner miner(ent_Miner_Bob);

  //simply run the miner through a few Update calls
  for (int i=0; i<20; ++i)
  { 
    miner.Update();

    Sleep(800);
  }

  //wait for a keypress before exiting
  PressAnyKeyToContinue();

  return 0;

}

