#ifndef STATE_H
#define STATE_H
#include "BaseGameEntity.h"

class Miner;

class State
{
public:

  virtual ~State(){}

  //this will execute when the state is entered
  virtual void Enter(Miner*)=0;

  //this is the state's normal update function
  virtual void Execute(Miner*)=0;

  //this will execute when the state is exited. (My word, isn't
  //life full of surprises... ;o))
  virtual void Exit(Miner*)=0;

};

#endif