#ifndef MINERSWIFE_OWNED_STATES_H
#define MINERSWIFE_OWNED_STATES_H

//  Desc:   All the states that can be assigned to the MinersWife class

#include "fsm/State.h"

class MinersWife;

//------------------------------------------------------------------------
//In this State Wife visits bathroom with a 1 in 10 chance. This state is
//also handles the message of miners arrival at home. On handling of this 
//message miners wife starts cooking stew
//------------------------------------------------------------------------
class WifesGlobalState : public State<MinersWife>
{
private:

	WifesGlobalState(){}

	//copy ctor and assignment should be private
	WifesGlobalState(const WifesGlobalState&);
	WifesGlobalState& operator=(const WifesGlobalState&);

public:

	//this is a singleton
	static WifesGlobalState* Instance();

	virtual void Enter(MinersWife* wife){}

	virtual void Execute(MinersWife* wife);

	virtual void Exit(MinersWife* wife){}

	virtual bool OnMessage(MinersWife* wife, const Telegram& msg);
};

//------------------------------------------------------------------------
// MinersWife does all the housework.
//------------------------------------------------------------------------
class DoHouseWork : public State<MinersWife>
{
private:

	DoHouseWork(){}

	//copy ctor and assignment should be private
	DoHouseWork(const DoHouseWork&);
	DoHouseWork& operator=(const DoHouseWork&);

public:

	//this is a singleton
	static DoHouseWork* Instance();

	virtual void Enter(MinersWife* wife);

	virtual void Execute(MinersWife* wife);

	virtual void Exit(MinersWife* wife);

	virtual bool OnMessage(MinersWife* wife, const Telegram& msg);

};

//------------------------------------------------------------------------
// Minerswife visits the bathroom.
//------------------------------------------------------------------------
class VisitBathroom : public State<MinersWife>
{
private:

	VisitBathroom(){}

	//copy ctor and assignment should be private
	VisitBathroom(const VisitBathroom&);
	VisitBathroom& operator=(const VisitBathroom&);

public:

	//this is a singleton
	static VisitBathroom* Instance();

	virtual void Enter(MinersWife* wife);

	virtual void Execute(MinersWife* wife);

	virtual void Exit(MinersWife* wife);

	virtual bool OnMessage(MinersWife* wife, const Telegram& msg);

};


//------------------------------------------------------------------------
// Minerswife cooks stew for her husband. When the stew is ready, she lets
// her husband know.
//------------------------------------------------------------------------
class CookStew : public State<MinersWife>
{
private:

	CookStew(){}

	//copy ctor and assignment should be private
	CookStew(const CookStew&);
	CookStew& operator=(const CookStew&);

public:

	//this is a singleton
	static CookStew* Instance();

	virtual void Enter(MinersWife* wife);

	virtual void Execute(MinersWife* wife);

	virtual void Exit(MinersWife* wife);

	virtual bool OnMessage(MinersWife* wife, const Telegram& msg);
};


#endif