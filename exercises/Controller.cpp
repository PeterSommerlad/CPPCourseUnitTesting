
#include "Controller.h"
#include <cstdlib> // for rand()


namespace controllers {

  struct Pack {
    bool isPackFirstMixExpired() const { return rand()>0.5; }
  } testpack;



	Controller::Controller()
	{
	}

	Controller::~Controller()
	{
	}

	std::deque<unsigned int> Controller::getAll() const
	{
		std::deque<unsigned int> positions;
		for(unsigned int i = 0; i < 20; ++i)
		{
			positions.push_back(i);
		}

		return positions;
	}

	std::deque<unsigned int> Controller::getEligible() const
	{
		std::deque<unsigned int> positions;
		for(unsigned int i = 0; i < 20; ++i)
		{
			if(needsAction(i))
			{
				positions.push_back(i);
			}
		}

		return positions;
	}

	std::deque<unsigned int> Controller::getEligibleRun() const
	{
		std::deque<unsigned int> positions;
		for(unsigned int i = 0; i < 20; ++i)
		{
			Pack* pack = findPackNeedsAction(i);

			if(pack != NULL && !pack->isPackFirstMixExpired())
			{
				positions.push_back(i);
			}
		}

		return positions;
	}

	std::deque<unsigned int> Controller::getFirstTime() const
	{
		std::deque<unsigned int> positions;
		for(unsigned int i = 0; i < 20; ++i)
		{
			auto pack = findPackNeedsAction(i);

			if(pack != NULL && pack->isPackFirstMixExpired())
			{
				positions.push_back(i);
			}
		}

		return positions;
	}

	bool Controller::needsAction(unsigned int pos) const
	{
		return findPackNeedsAction(pos) != NULL;
	}

Pack* Controller::findPackNeedsAction(unsigned int pos) const
	{
    // simulate external dependency
    if (rand()>0.5) { 
      return &testpack;
    } else { 
      return NULL;
    }
	}
  /*
	void Controller::mix(CReagentCarouselStateMachine::EMixType type) const
	{
		std::deque<unsigned int> positions;
		switch(type)
		{
			case CReagentCarouselStateMachine::ENoLogging:
				positions = getAll();
				break;
			case CReagentCarouselStateMachine::EFirstTimeMixing:
				positions = getFirstTime();
				break;
			case CReagentCarouselStateMachine::ESynchronousMixing:
				positions = getEligibleRun();
				break;
			default:
				positions = getEligible();
				break;
		}

		theApp.m_instrument.m_reagentCarouselSM.MixReagents(type, positions);
	}
  */


} // namespace controllers {